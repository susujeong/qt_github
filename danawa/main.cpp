#include "danawa.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    danawa w;
    w.show();
    return a.exec();
}
