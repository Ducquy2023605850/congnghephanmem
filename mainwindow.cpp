#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui ->lineEdit_username-> text();
    QString password = ui ->lineEdit_password-> text();
    if (username=="sv"&& password=="sv"){
        QMessageBox::information(this,"Đăng nhập","Đăng nhập thành công!");
        hide();
        secdialog= new SecDialog(this);
        secdialog->show();

    }
    else {
        QMessageBox::warning(this,"Đăng nhập","Đăng nhập thất bại!");
    }
}

