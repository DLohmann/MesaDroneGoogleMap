#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUrl>
#include <QApplication>
#include <QDesktopWidget>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool checkUrl(const QUrl &url);
    QLabel  mapStatusMessage();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
