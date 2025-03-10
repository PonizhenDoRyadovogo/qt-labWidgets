#include <QLayout>
#include <QtMath>
#include <QMessageBox>

#include "Win.h"

Win::Win(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Возведение в квадрат");
    frame = new QFrame(this);
    frame->setFrameShadow(QFrame::Raised);
    frame->setFrameShape(QFrame::Panel);
    inputLabel = new QLabel("Введите число:", this);
    inputEdit = new QLineEdit("", this);
    StrValidator* v = new StrValidator(inputEdit);
    inputEdit->setValidator(v);
    outputLabel = new QLabel("Результат:", this);
    outputEdit = new QLineEdit("", this);
    nextButton = new QPushButton("Следующий", this);
    exitButton = new QPushButton("Выход", this);

    QVBoxLayout* vLayout1 = new QVBoxLayout(frame);
    vLayout1->addWidget(inputLabel);
    vLayout1->addWidget(inputEdit);
    vLayout1->addWidget(outputLabel);
    vLayout1->addWidget(outputEdit);
    vLayout1->addStretch();

    QVBoxLayout* vLayout2 = new QVBoxLayout();
    vLayout2->addWidget(nextButton);
    vLayout2->addWidget(exitButton);
    vLayout2->addStretch();

    QHBoxLayout* hLayout = new QHBoxLayout(this);
    hLayout->addWidget(frame);
    hLayout->addLayout(vLayout2);

    begin();

    connect(nextButton, &QPushButton::clicked, this, &Win::begin);
    connect(exitButton, &QPushButton::clicked, this, &QWidget::close);
    connect(inputEdit, &QLineEdit::returnPressed, this, &Win::calc);
}

void Win::begin()
{
    inputEdit->clear();
    nextButton->setEnabled(false);
    nextButton->setDefault(false);
    inputEdit->setEnabled(true);
    outputEdit->setVisible(false);
    outputEdit->setEnabled(false);
    outputLabel->setVisible(false);
    inputEdit->setFocus();
}

void Win::calc()
{
    bool Ok = true;
    float r, a;
    QString str = inputEdit->text();
    a = str.toDouble(&Ok);
    if(Ok) {
        float maxVal = qSqrt(std::numeric_limits<float>::max());
        if (qAbs(a) > maxVal) {
            QMessageBox::warning(this, "Ошибка", "Результат слишком велик и может привести к переполнению.");
            return;
        }

        r = a * a;

        if (qIsInf(r) || qIsNaN(r)) {
            QMessageBox::warning(this, "Ошибка", "Произошло переполнение при вычислении.");
            return;
        }

        str.setNum(r);
        outputEdit->setText(str);
        inputEdit->setEnabled(false);
        outputLabel->setVisible(true);
        outputEdit->setVisible(true);
        nextButton->setEnabled(true);
        nextButton->setVisible(true);
        nextButton->setFocus();
    }
    else {
        if(!str.isEmpty()) {
            QMessageBox msgBox(QMessageBox::Information, "Возведение в квадрат.", "Введено неверное значение.", QMessageBox::Ok);
            msgBox.exec();
        }
    }
}
