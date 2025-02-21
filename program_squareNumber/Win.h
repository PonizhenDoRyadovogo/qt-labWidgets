#ifndef WIN_H
#define WIN_H

#include <QWidget>
#include <QFrame>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QValidator>

QT_BEGIN_NAMESPACE
namespace Ui { class Win; }
QT_END_NAMESPACE

class Win : public QWidget
{
    Q_OBJECT

public:
    Win(QWidget* parent = nullptr);
public slots:
    void begin();
    void calc();
protected:
    QFrame* frame = nullptr;
    QLabel* inputLabel = nullptr;
    QLineEdit* inputEdit = nullptr;
    QLabel* outputLabel = nullptr;
    QLineEdit* outputEdit = nullptr;
    QPushButton* nextButton = nullptr;
    QPushButton* exitButton = nullptr;
};

class StrValidator: public QValidator
{
public:
    StrValidator(QObject* parent = nullptr)
        :QValidator(parent)
    {}

    virtual State validate(QString &str, int& pos) const
    {
        return Acceptable;
    }
};

#endif //WIN_N
