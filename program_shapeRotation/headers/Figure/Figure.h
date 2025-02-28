#ifndef FIGURE_H
#define FIGURE_H

#include <QPainter>

class Figure
{
public:
    Figure(int x, int y, int halflen)
        :_x(x), _y(y), _halflen(halflen)
    {}
    virtual ~Figure() = default;
    void move(float alpha, QPainter *painter);
protected:
    int _x, _y, _halflen, _dx, _dy, _r;
    virtual void _draw(QPainter *painter) = 0;
};

class MyLine: public Figure
{
public:
    MyLine(int x, int y, int halflen)
        :Figure(x, y, halflen)
    {}
protected:
    void _draw(QPainter *painter) override;
};

class MyRect: public Figure
{
public:
    MyRect(int x, int y, int halflen)
        :Figure(x, y, halflen)
    {}
protected:
    void _draw(QPainter *painter) override;
};

#endif // FIGURE_H
