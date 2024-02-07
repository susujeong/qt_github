#ifndef MY_QLABEL_H
#define MY_QLABEL_H

#include <QLabel>
#include <QWidget>
#include <QMouseEvent>
#include <QEvent>
#include <QDebug>
class my_qlabel : public QLabel
{
    Q_OBJECT
public:
    explicit my_qlabel(QWidget *parent = 0);
    void mouseMoveEvent(QMouseEvent *ev);
};



#endif // MY_QLABEL_H
