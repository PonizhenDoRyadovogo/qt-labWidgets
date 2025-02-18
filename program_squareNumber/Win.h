#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Win; }
QT_END_NAMESPACE

class Win : public QMainWindow
{
    Q_OBJECT

public:
    Win(QWidget *parent = nullptr);
    ~Win();

private:
    Ui::Win *ui;
};
