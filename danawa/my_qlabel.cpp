#include "my_qlabel.h"

my_qlabel::my_qlabel(QWidget *parent): QLabel(parent)
{

}

void my_qlabel :: mouseMoveEvent(QMouseEvent *ev){

    this -> x = ev->x();
    this -> y = ev->y();
    emit Mouse_Pos();
}
