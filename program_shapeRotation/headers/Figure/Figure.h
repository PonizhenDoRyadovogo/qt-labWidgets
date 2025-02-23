#ifndef FIGURE_H
#define FIGURE_H

#include <QPainter>

class Figure
{
public:
    Figure(int X, int Y, int Halflen)
        :x(X), y(Y), halflen(Halflen)
    {}
    void move(float Alpha, QPainter *painter);
protected:
    int x, y, halflen, dx, dy, r;
    virtual void draw(QPainter *painter) = 0;
};

class MyLine: public Figure
{
public:
    MyLine(int x, int y, int halflen)
        :Figure(x, y, halflen)
    {}
protected:
    void draw(QPainter *painer) override;
};

class MyRect: public Figure
{
public:
    MyRect(int x, int y, int halflen)
        :Figure(x, y, halflen)
    {}
protected:
    void draw(QPainter *painter) override;
};

#endif // FIGURE_H
