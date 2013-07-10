#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_actionQuit_triggered();

    void on_searchButton_clicked();
    void on_webView_loadFinished(bool finished);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
