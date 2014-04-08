#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QString>
#include <QWebFrame>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect menu actions
    connect(ui->actionExit, SIGNAL(triggered()), qApp, SLOT(quit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_map_loadFinished(bool finished)
{
    if (finished) {
        ui->statusBar->showMessage(tr("Page loaded"));
    }
}

void MainWindow::on_buttonSearch_clicked()
{
    QString js = QString("searchAddress('%1')").arg(ui->lineEditSearch->text().remove('\''));

    qDebug() << "Javascript: " << js;
    ui->map->page()->mainFrame()->evaluateJavaScript(js);
}
