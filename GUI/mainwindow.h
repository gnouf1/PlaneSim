/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAfficherListe;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *Commandes;
    QFormLayout *formLayout;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QPushButton *buttonVT23;
    QPushButton *buttonVT12;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonV12;
    QPushButton *buttonV13;
    QPushButton *buttonV23;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *buttonP12;
    QPushButton *buttonP22;
    QPushButton *buttonP32;
    QWidget *Pannes;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *buttonPanneP11;
    QPushButton *buttonPanneP21;
    QPushButton *buttonPanneP31;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *buttonPanneP12;
    QPushButton *buttonPanneP22;
    QPushButton *buttonPanneP32;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *buttonPanneT1;
    QPushButton *buttonPanneT2;
    QPushButton *buttonPanneT3;
    QTextBrowser *InfoDisplayer;
    QPushButton *buttonStop;
    QPushButton *buttonLaunchExercice;
    QPushButton *buttonSave;
    QPushButton *pushButton;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1158, 600);
        actionAfficherListe = new QAction(MainWindow);
        actionAfficherListe->setObjectName(QString::fromUtf8("actionAfficherListe"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        Commandes = new QWidget();
        Commandes->setObjectName(QString::fromUtf8("Commandes"));
        formLayout = new QFormLayout(Commandes);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(Commandes);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonVT23 = new QPushButton(Commandes);
        buttonVT23->setObjectName(QString::fromUtf8("buttonVT23"));

        gridLayout_2->addWidget(buttonVT23, 0, 1, 1, 1);

        buttonVT12 = new QPushButton(Commandes);
        buttonVT12->setObjectName(QString::fromUtf8("buttonVT12"));

        gridLayout_2->addWidget(buttonVT12, 0, 0, 1, 1);


        formLayout->setLayout(0, QFormLayout::FieldRole, gridLayout_2);

        label_2 = new QLabel(Commandes);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonV12 = new QPushButton(Commandes);
        buttonV12->setObjectName(QString::fromUtf8("buttonV12"));

        horizontalLayout->addWidget(buttonV12);

        buttonV13 = new QPushButton(Commandes);
        buttonV13->setObjectName(QString::fromUtf8("buttonV13"));

        horizontalLayout->addWidget(buttonV13);

        buttonV23 = new QPushButton(Commandes);
        buttonV23->setObjectName(QString::fromUtf8("buttonV23"));

        horizontalLayout->addWidget(buttonV23);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        label_4 = new QLabel(Commandes);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        buttonP12 = new QPushButton(Commandes);
        buttonP12->setObjectName(QString::fromUtf8("buttonP12"));

        horizontalLayout_3->addWidget(buttonP12);

        buttonP22 = new QPushButton(Commandes);
        buttonP22->setObjectName(QString::fromUtf8("buttonP22"));

        horizontalLayout_3->addWidget(buttonP22);

        buttonP32 = new QPushButton(Commandes);
        buttonP32->setObjectName(QString::fromUtf8("buttonP32"));

        horizontalLayout_3->addWidget(buttonP32);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        tabWidget->addTab(Commandes, QString());
        Pannes = new QWidget();
        Pannes->setObjectName(QString::fromUtf8("Pannes"));
        formLayout_2 = new QFormLayout(Pannes);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_5 = new QLabel(Pannes);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        buttonPanneP11 = new QPushButton(Pannes);
        buttonPanneP11->setObjectName(QString::fromUtf8("buttonPanneP11"));

        horizontalLayout_4->addWidget(buttonPanneP11);

        buttonPanneP21 = new QPushButton(Pannes);
        buttonPanneP21->setObjectName(QString::fromUtf8("buttonPanneP21"));

        horizontalLayout_4->addWidget(buttonPanneP21);

        buttonPanneP31 = new QPushButton(Pannes);
        buttonPanneP31->setObjectName(QString::fromUtf8("buttonPanneP31"));

        horizontalLayout_4->addWidget(buttonPanneP31);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, horizontalLayout_4);

        label_6 = new QLabel(Pannes);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        buttonPanneP12 = new QPushButton(Pannes);
        buttonPanneP12->setObjectName(QString::fromUtf8("buttonPanneP12"));

        horizontalLayout_5->addWidget(buttonPanneP12);

        buttonPanneP22 = new QPushButton(Pannes);
        buttonPanneP22->setObjectName(QString::fromUtf8("buttonPanneP22"));

        horizontalLayout_5->addWidget(buttonPanneP22);

        buttonPanneP32 = new QPushButton(Pannes);
        buttonPanneP32->setObjectName(QString::fromUtf8("buttonPanneP32"));

        horizontalLayout_5->addWidget(buttonPanneP32);


        formLayout_2->setLayout(1, QFormLayout::FieldRole, horizontalLayout_5);

        label_7 = new QLabel(Pannes);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        buttonPanneT1 = new QPushButton(Pannes);
        buttonPanneT1->setObjectName(QString::fromUtf8("buttonPanneT1"));

        horizontalLayout_6->addWidget(buttonPanneT1);

        buttonPanneT2 = new QPushButton(Pannes);
        buttonPanneT2->setObjectName(QString::fromUtf8("buttonPanneT2"));

        horizontalLayout_6->addWidget(buttonPanneT2);

        buttonPanneT3 = new QPushButton(Pannes);
        buttonPanneT3->setObjectName(QString::fromUtf8("buttonPanneT3"));

        horizontalLayout_6->addWidget(buttonPanneT3);


        formLayout_2->setLayout(2, QFormLayout::FieldRole, horizontalLayout_6);

        tabWidget->addTab(Pannes, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 4);

        InfoDisplayer = new QTextBrowser(centralwidget);
        InfoDisplayer->setObjectName(QString::fromUtf8("InfoDisplayer"));

        gridLayout->addWidget(InfoDisplayer, 0, 0, 1, 4);

        buttonStop = new QPushButton(centralwidget);
        buttonStop->setObjectName(QString::fromUtf8("buttonStop"));

        gridLayout->addWidget(buttonStop, 2, 3, 1, 1);

        buttonLaunchExercice = new QPushButton(centralwidget);
        buttonLaunchExercice->setObjectName(QString::fromUtf8("buttonLaunchExercice"));

        gridLayout->addWidget(buttonLaunchExercice, 2, 2, 1, 1);

        buttonSave = new QPushButton(centralwidget);
        buttonSave->setObjectName(QString::fromUtf8("buttonSave"));
        buttonSave->setEnabled(false);

        gridLayout->addWidget(buttonSave, 2, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAfficherListe->setText(QApplication::translate("MainWindow", "Afficher la liste des entrainements pr\303\251cedent", nullptr));
        label->setText(QApplication::translate("MainWindow", "Vannes transfert:", nullptr));
        buttonVT23->setText(QApplication::translate("MainWindow", "VT23", nullptr));
        buttonVT12->setText(QApplication::translate("MainWindow", "VT12", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Vannes :", nullptr));
        buttonV12->setText(QApplication::translate("MainWindow", "V12", nullptr));
        buttonV13->setText(QApplication::translate("MainWindow", "V13", nullptr));
        buttonV23->setText(QApplication::translate("MainWindow", "V23", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Pompes de secours :", nullptr));
        buttonP12->setText(QApplication::translate("MainWindow", "P12", nullptr));
        buttonP22->setText(QApplication::translate("MainWindow", "P22", nullptr));
        buttonP32->setText(QApplication::translate("MainWindow", "P32", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Commandes), QApplication::translate("MainWindow", "Commandes", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Pannes des pompes :", nullptr));
        buttonPanneP11->setText(QApplication::translate("MainWindow", "P11", nullptr));
        buttonPanneP21->setText(QApplication::translate("MainWindow", "P21", nullptr));
        buttonPanneP31->setText(QApplication::translate("MainWindow", "P31", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Pannes des pompes de secours :", nullptr));
        buttonPanneP12->setText(QApplication::translate("MainWindow", "P12", nullptr));
        buttonPanneP22->setText(QApplication::translate("MainWindow", "P22", nullptr));
        buttonPanneP32->setText(QApplication::translate("MainWindow", "P32", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Vidange des r\303\251servoirs :", nullptr));
        buttonPanneT1->setText(QApplication::translate("MainWindow", "T1", nullptr));
        buttonPanneT2->setText(QApplication::translate("MainWindow", "T2", nullptr));
        buttonPanneT3->setText(QApplication::translate("MainWindow", "T3", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Pannes), QApplication::translate("MainWindow", "Pannes", nullptr));
        buttonStop->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
        buttonLaunchExercice->setText(QApplication::translate("MainWindow", "Lancer exercice", nullptr));
        buttonSave->setText(QApplication::translate("MainWindow", "Sauvegarder", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Charger", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
