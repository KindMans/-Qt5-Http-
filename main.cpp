#include "mainfrom.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainFrom w;
    w.show();
    return a.exec();
}
