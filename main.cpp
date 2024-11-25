#include "tcpfileserver.h"
#include <QApplication>
#include<tcpfilesender.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TcpFileServer w;
    TcpFileSender x;
    x.show();
    w.show();

    return a.exec();
}
