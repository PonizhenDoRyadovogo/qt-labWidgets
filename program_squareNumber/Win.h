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
    Win(QWidget *parent = nullptr);
public slots:
    void begin();
    void calc();
protected:
    QFrame* frame;
    QLabel* inputLabel;
    QLineEdit* inputEdit;
    QLabel* outputLabel;
    QLineEdit* outputEdit;
    QPushButton* nextButton;
    QPushButton* exitButton;
};

class StrValidator: public QValidator
{
public:
    StrValidator(QObject* parent = 0)
        :QValidator(parent)
    {}
    // TODO: Implement the string processing method
    virtual State validate(QString &str, int& pos) const
    {
        return Acceptable;
    }
};

#endif //WIN_N
