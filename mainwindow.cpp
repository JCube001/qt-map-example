#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QWebView>
#include <QWebFrame>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionQuit_triggered()
{
    qApp->quit();
}

void MainWindow::on_searchButton_clicked()
{   
    QString js = QString("searchAddress('%1')").arg(ui->searchEdit->text().remove('\''));
    qDebug() << "Javascript: " + js;
    ui->webView->page()->mainFrame()->evaluateJavaScript(js);
}

void MainWindow::on_webView_loadFinished(bool finished)
{
    if (finished)
    {
        ui->statusBar->showMessage("Page loaded", 5000);
    }
}
