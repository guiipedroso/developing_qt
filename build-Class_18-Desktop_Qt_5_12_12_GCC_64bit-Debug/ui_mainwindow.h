/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txt_item;
    QPushButton *btn_add;
    QPushButton *btn_add_all;
    QPushButton *btn_mark;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(563, 382);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 300, 131, 25));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 30, 461, 261));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        txt_item = new QLineEdit(widget);
        txt_item->setObjectName(QString::fromUtf8("txt_item"));

        horizontalLayout->addWidget(txt_item);

        btn_add = new QPushButton(widget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));

        horizontalLayout->addWidget(btn_add);

        btn_add_all = new QPushButton(widget);
        btn_add_all->setObjectName(QString::fromUtf8("btn_add_all"));

        horizontalLayout->addWidget(btn_add_all);

        btn_mark = new QPushButton(widget);
        btn_mark->setObjectName(QString::fromUtf8("btn_mark"));

        horizontalLayout->addWidget(btn_mark);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 563, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Desmarcar todos", nullptr));
        btn_add->setText(QApplication::translate("MainWindow", "Adicionar", nullptr));
        btn_add_all->setText(QApplication::translate("MainWindow", "Adicionar*", nullptr));
        btn_mark->setText(QApplication::translate("MainWindow", "Marcar", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Desmarcar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
