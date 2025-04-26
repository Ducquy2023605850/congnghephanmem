/********************************************************************************
** Form generated from reading UI file 'thirddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDDIALOG_H
#define UI_THIRDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_thirdDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_muale;
    QPushButton *pushButton_mualop;

    void setupUi(QDialog *thirdDialog)
    {
        if (thirdDialog->objectName().isEmpty())
            thirdDialog->setObjectName("thirdDialog");
        thirdDialog->resize(464, 336);
        horizontalLayout_2 = new QHBoxLayout(thirdDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton_muale = new QPushButton(thirdDialog);
        pushButton_muale->setObjectName("pushButton_muale");

        verticalLayout->addWidget(pushButton_muale);

        pushButton_mualop = new QPushButton(thirdDialog);
        pushButton_mualop->setObjectName("pushButton_mualop");

        verticalLayout->addWidget(pushButton_mualop);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(thirdDialog);

        QMetaObject::connectSlotsByName(thirdDialog);
    } // setupUi

    void retranslateUi(QDialog *thirdDialog)
    {
        thirdDialog->setWindowTitle(QCoreApplication::translate("thirdDialog", "Dialog", nullptr));
        pushButton_muale->setText(QCoreApplication::translate("thirdDialog", "Mua l\341\272\273", nullptr));
        pushButton_mualop->setText(QCoreApplication::translate("thirdDialog", "Mua theo l\341\273\233p", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thirdDialog: public Ui_thirdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDDIALOG_H
