/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton_open;
    QPushButton *pushButton_close;
    QPushButton *pushButton_up;
    QSpinBox *spinBox;
    QPushButton *pushButton_down;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_local;
    QLineEdit *lineEdit_num;
    QPushButton *pushButton_reset;
    QSpinBox *spinBox_speed;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_Port;
    QPushButton *pushButton_socket;
    QPushButton *pushButton_set;
    QLineEdit *lineEdit_L1;
    QLineEdit *lineEdit_L2;
    QLineEdit *lineEdit_L3;
    QLineEdit *lineEdit_L4;
    QLabel *label_Z1;
    QLabel *label_Z2;
    QLabel *label_Z3;
    QLabel *label_Z4;
    QPushButton *goto1;
    QPushButton *goto2;
    QPushButton *getValue1;
    QPushButton *getValue2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(480, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 81, 21));
        pushButton_open = new QPushButton(centralWidget);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));
        pushButton_open->setGeometry(QRect(10, 40, 41, 32));
        pushButton_close = new QPushButton(centralWidget);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(50, 40, 41, 32));
        pushButton_up = new QPushButton(centralWidget);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));
        pushButton_up->setGeometry(QRect(180, 10, 80, 31));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(130, 10, 51, 24));
        spinBox->setMinimum(1);
        spinBox->setMaximum(4);
        pushButton_down = new QPushButton(centralWidget);
        pushButton_down->setObjectName(QStringLiteral("pushButton_down"));
        pushButton_down->setGeometry(QRect(180, 40, 80, 31));
        pushButton_stop = new QPushButton(centralWidget);
        pushButton_stop->setObjectName(QStringLiteral("pushButton_stop"));
        pushButton_stop->setGeometry(QRect(180, 70, 80, 31));
        pushButton_local = new QPushButton(centralWidget);
        pushButton_local->setObjectName(QStringLiteral("pushButton_local"));
        pushButton_local->setGeometry(QRect(180, 100, 80, 31));
        lineEdit_num = new QLineEdit(centralWidget);
        lineEdit_num->setObjectName(QStringLiteral("lineEdit_num"));
        lineEdit_num->setGeometry(QRect(270, 70, 141, 21));
        pushButton_reset = new QPushButton(centralWidget);
        pushButton_reset->setObjectName(QStringLiteral("pushButton_reset"));
        pushButton_reset->setGeometry(QRect(180, 130, 80, 31));
        spinBox_speed = new QSpinBox(centralWidget);
        spinBox_speed->setObjectName(QStringLiteral("spinBox_speed"));
        spinBox_speed->setGeometry(QRect(130, 40, 51, 24));
        spinBox_speed->setMinimum(1);
        spinBox_speed->setMaximum(9);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 40, 59, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 10, 59, 16));
        lineEdit_Port = new QLineEdit(centralWidget);
        lineEdit_Port->setObjectName(QStringLiteral("lineEdit_Port"));
        lineEdit_Port->setGeometry(QRect(270, 10, 71, 27));
        pushButton_socket = new QPushButton(centralWidget);
        pushButton_socket->setObjectName(QStringLiteral("pushButton_socket"));
        pushButton_socket->setGeometry(QRect(270, 40, 99, 27));
        pushButton_set = new QPushButton(centralWidget);
        pushButton_set->setObjectName(QStringLiteral("pushButton_set"));
        pushButton_set->setGeometry(QRect(270, 100, 99, 31));
        lineEdit_L1 = new QLineEdit(centralWidget);
        lineEdit_L1->setObjectName(QStringLiteral("lineEdit_L1"));
        lineEdit_L1->setGeometry(QRect(10, 80, 81, 27));
        lineEdit_L2 = new QLineEdit(centralWidget);
        lineEdit_L2->setObjectName(QStringLiteral("lineEdit_L2"));
        lineEdit_L2->setGeometry(QRect(100, 80, 81, 27));
        lineEdit_L3 = new QLineEdit(centralWidget);
        lineEdit_L3->setObjectName(QStringLiteral("lineEdit_L3"));
        lineEdit_L3->setGeometry(QRect(10, 110, 81, 27));
        lineEdit_L4 = new QLineEdit(centralWidget);
        lineEdit_L4->setObjectName(QStringLiteral("lineEdit_L4"));
        lineEdit_L4->setGeometry(QRect(100, 110, 81, 27));
        label_Z1 = new QLabel(centralWidget);
        label_Z1->setObjectName(QStringLiteral("label_Z1"));
        label_Z1->setGeometry(QRect(20, 140, 67, 17));
        label_Z2 = new QLabel(centralWidget);
        label_Z2->setObjectName(QStringLiteral("label_Z2"));
        label_Z2->setGeometry(QRect(110, 140, 67, 17));
        label_Z3 = new QLabel(centralWidget);
        label_Z3->setObjectName(QStringLiteral("label_Z3"));
        label_Z3->setGeometry(QRect(20, 160, 67, 17));
        label_Z4 = new QLabel(centralWidget);
        label_Z4->setObjectName(QStringLiteral("label_Z4"));
        label_Z4->setGeometry(QRect(110, 160, 67, 17));
        goto1 = new QPushButton(centralWidget);
        goto1->setObjectName(QStringLiteral("goto1"));
        goto1->setGeometry(QRect(270, 140, 61, 27));
        goto2 = new QPushButton(centralWidget);
        goto2->setObjectName(QStringLiteral("goto2"));
        goto2->setGeometry(QRect(340, 140, 61, 27));
        getValue1 = new QPushButton(centralWidget);
        getValue1->setObjectName(QStringLiteral("getValue1"));
        getValue1->setGeometry(QRect(270, 170, 61, 27));
        getValue2 = new QPushButton(centralWidget);
        getValue2->setObjectName(QStringLiteral("getValue2"));
        getValue2->setGeometry(QRect(340, 170, 61, 27));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        lineEdit->setText(QApplication::translate("MainWindow", "ttySAC1", 0));
        pushButton_open->setText(QApplication::translate("MainWindow", "open", 0));
        pushButton_close->setText(QApplication::translate("MainWindow", "close", 0));
        pushButton_up->setText(QApplication::translate("MainWindow", "UP", 0));
        pushButton_down->setText(QApplication::translate("MainWindow", "DOWN", 0));
        pushButton_stop->setText(QApplication::translate("MainWindow", "STOP", 0));
        pushButton_local->setText(QApplication::translate("MainWindow", "LOCAL", 0));
        pushButton_reset->setText(QApplication::translate("MainWindow", "RESET", 0));
        label->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246", 0));
        label_2->setText(QApplication::translate("MainWindow", "\347\224\265\346\234\272", 0));
        lineEdit_Port->setText(QApplication::translate("MainWindow", "8000", 0));
        pushButton_socket->setText(QApplication::translate("MainWindow", "oepnsocket", 0));
        pushButton_set->setText(QApplication::translate("MainWindow", "SetLength", 0));
        label_Z1->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_Z2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_Z3->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_Z4->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        goto1->setText(QApplication::translate("MainWindow", "goto1", 0));
        goto2->setText(QApplication::translate("MainWindow", "goto2", 0));
        getValue1->setText(QApplication::translate("MainWindow", "getVal", 0));
        getValue2->setText(QApplication::translate("MainWindow", "getVal", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
