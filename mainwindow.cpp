#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWebEngineWidgets/QWebEnginePage>
#include <QtWebEngineWidgets/QWebEngineSettings>
#include <QDebug>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
   ui->setupUi(this);

   //Add a Google Map to the UI
   QWebEngineView *webview = new QWebEngineView();
   //Define where the JavaScript resource file is located
   QString urlqrc = "qrc:/html/map.html";
   QUrl url = QUrl(urlqrc);
   checkUrl(url);
   //Add the page loaded from the url to the UI
   webview->page()->load(url);
   ui->verticalLayout->addWidget(webview);
}
//***************************************************************************
// Main Window Destructor
//***************************************************************************
MainWindow::~MainWindow()
{
    delete ui;
}

//***************************************************************************
// Check that the Google API caller is present and valid
//***************************************************************************
bool MainWindow::checkUrl(const QUrl &url) {
    if (!url.isValid()) {
        ui->mapStatusMessage->setText("Map Status... Could not fetch URL:");
        //Why did the check fail?
            //Is there an internet connection?   --> If No emit message
            //Is the JS resource file present?   --> If No emit message
            //Is the JS resource file corrupted? --> If Yes emit message
        return false;
    }
        ui->mapStatusMessage->setText("Map Status... Configured!");
        return true;
}
