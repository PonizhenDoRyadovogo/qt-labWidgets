#include "Win.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Win w(0);
    w.show();
    return a.exec();
}
