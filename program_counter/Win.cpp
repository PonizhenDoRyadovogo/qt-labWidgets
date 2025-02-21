#include "Win.h"

Counter::Counter(const QString& contents, QWidget* parent)
    :QLineEdit(contents, parent)
{
}

Win::Win(QWidget *parent)
    : QWidget(parent)
{
}

Win::~Win()
{
}

