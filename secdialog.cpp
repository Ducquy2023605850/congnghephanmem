#include "secdialog.h"
#include "ui_secdialog.h"
#include "thirddialog.h"
SecDialog::SecDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;

}

void SecDialog::on_pushButton_muasach_clicked()
{
    thirdDialog thirddialog(this);
    thirddialog.exec();// mở dạng modal, chờ chọn xong
}

