#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWebEngineWidgets/QWebEnginePage>
#include <QtWebEngineWidgets/QWebEngineSettings>
#include <QWebFrame>
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

   ui->label->setStyleSheet("QLabel { background-color : white; color : black; }");
   ui->label->setFixedWidth(150);

   ui->label_2->setStyleSheet("QLabel { background-color : white; color : black; }");
   ui->label_2->setFixedWidth(150);





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
            //Is there an internet connection?
            //Is the JS resource file present?
            //Does the JS resource file contain errors?
        return false;
    }
        ui->mapStatusMessage->setText("Map Status... Configured!");
        return true;
}

void MainWindow::on_pushButton_clicked()
{
//    // print location variables

    //Add a Google Map to the UI
//    QWebEngineView *webview = new QWebEngineView();
//    //Define where the JavaScript resource file is located
//    QString urlqrc = "qrc:/html/map.html";
//    QUrl url = QUrl(urlqrc);
//    checkUrl(url);
//    //Add the page loaded from the url to the UI
//    webview->page()->load(url);

//    QWebFrame* frame = ui->webView->page()->mainFrame();


//    // Get latitude and longitude variables from JavaScript
//    const QVariant longitude = webview->page()->mainFrame()->evaluateJavaScript("latitude");
//    const QVariant latitude = webview->page()->mainFrame()->evaluateJavaScript("latitude");

//    // Display new variables on screen
//    ui->label->setText("   Latitude: " + longitude);
//    ui->label_2->setText("   Longitude: " + latitude);




//    const QVariant myvar = webview.page()->mainFrame()->evaluateJavaScript("window.myint");
//    bool ok;
//    const int myint = myvar.toInt(&ok);
//    if (!ok)
//      qWarning() << "Error getting int from JS";


}
