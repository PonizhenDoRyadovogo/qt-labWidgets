#ifndef AREA_H
#define AREA_H

#include <QWidget>

#include "Figure.h"

class Area : public QWidget
{
    Q_OBJECT
public:
    explicit Area(QWidget *parent = nullptr);
    ~Area();
    MyLine *myLine = nullptr;
    MyRect *myRect = nullptr;
protected:
    void _paintEvent(QPaintEvent *event);
    void _timerEvent(QTimerEvent *event);
    void _showEvent(QShowEvent *event);
    void _hideEvent(QHideEvent *event);
private:
    int m_myTimer;
    float m_alpha;
};

#endif // AREA_H
