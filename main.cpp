#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setFixedSize(900,800);
    w.setWindowTitle("计算器");
    w.iniUI();
    w.show();

    return a.exec();
}
