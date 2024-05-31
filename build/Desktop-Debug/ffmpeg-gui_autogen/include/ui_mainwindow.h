/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *inputFileButton;
    QLabel *inputFileLabel;
    QLabel *zOutputExtensionLabel;
    QLineEdit *outputExtensionLineEdit;
    QPushButton *outputFolderButton;
    QLabel *outputFolderLabel;
    QTextEdit *uiShell;
    QLineEdit *outputNameLineEdit;
    QLabel *zOutputNameLabel;
    QPushButton *startButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(687, 546);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        inputFileButton = new QPushButton(centralwidget);
        inputFileButton->setObjectName(QString::fromUtf8("inputFileButton"));
        inputFileButton->setGeometry(QRect(0, 0, 121, 31));
        inputFileLabel = new QLabel(centralwidget);
        inputFileLabel->setObjectName(QString::fromUtf8("inputFileLabel"));
        inputFileLabel->setGeometry(QRect(120, 0, 341, 31));
        zOutputExtensionLabel = new QLabel(centralwidget);
        zOutputExtensionLabel->setObjectName(QString::fromUtf8("zOutputExtensionLabel"));
        zOutputExtensionLabel->setGeometry(QRect(0, 41, 281, 20));
        outputExtensionLineEdit = new QLineEdit(centralwidget);
        outputExtensionLineEdit->setObjectName(QString::fromUtf8("outputExtensionLineEdit"));
        outputExtensionLineEdit->setGeometry(QRect(280, 40, 113, 21));
        outputFolderButton = new QPushButton(centralwidget);
        outputFolderButton->setObjectName(QString::fromUtf8("outputFolderButton"));
        outputFolderButton->setGeometry(QRect(0, 70, 91, 31));
        outputFolderLabel = new QLabel(centralwidget);
        outputFolderLabel->setObjectName(QString::fromUtf8("outputFolderLabel"));
        outputFolderLabel->setGeometry(QRect(90, 70, 541, 31));
        uiShell = new QTextEdit(centralwidget);
        uiShell->setObjectName(QString::fromUtf8("uiShell"));
        uiShell->setGeometry(QRect(10, 160, 411, 261));
        uiShell->setReadOnly(true);
        outputNameLineEdit = new QLineEdit(centralwidget);
        outputNameLineEdit->setObjectName(QString::fromUtf8("outputNameLineEdit"));
        outputNameLineEdit->setGeometry(QRect(90, 100, 113, 21));
        zOutputNameLabel = new QLabel(centralwidget);
        zOutputNameLabel->setObjectName(QString::fromUtf8("zOutputNameLabel"));
        zOutputNameLabel->setGeometry(QRect(0, 100, 91, 21));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(0, 120, 80, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 687, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        inputFileButton->setText(QCoreApplication::translate("MainWindow", "Choose Input file", nullptr));
        inputFileLabel->setText(QCoreApplication::translate("MainWindow", "null", nullptr));
        zOutputExtensionLabel->setText(QCoreApplication::translate("MainWindow", "Choose output extension (i.e.: mp4, mov, wav):", nullptr));
        outputFolderButton->setText(QCoreApplication::translate("MainWindow", "Output folder", nullptr));
        outputFolderLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        outputNameLineEdit->setText(QCoreApplication::translate("MainWindow", "out", nullptr));
        zOutputNameLabel->setText(QCoreApplication::translate("MainWindow", "output name:", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
