#include "mainwindow.h"
#include <QApplication>
#include <QtWebEngine>
#include <QtWebEngineWidgets/QWebEngineView>
#include <iostream>
#include <QtGlobal>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

//    QWebEngineView view;
//    QUrl url = QUrl("qrc:/html/map.html");
//    QTextStream(stdout) << qUtf8Printable(url.toString()) << endl;

//    view.setUrl(url);
//    view.resize(1024, 750);
//    view.show();

    return a.exec();
}
