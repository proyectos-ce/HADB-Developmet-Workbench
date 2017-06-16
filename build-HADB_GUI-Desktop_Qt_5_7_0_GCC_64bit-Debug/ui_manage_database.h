/********************************************************************************
** Form generated from reading UI file 'manage_database.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGE_DATABASE_H
#define UI_MANAGE_DATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Manage_Database
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *LineEntry;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QTableWidget *tableWidget;

    void setupUi(QDialog *Manage_Database)
    {
        if (Manage_Database->objectName().isEmpty())
            Manage_Database->setObjectName(QStringLiteral("Manage_Database"));
        Manage_Database->resize(1213, 680);
        buttonBox = new QDialogButtonBox(Manage_Database);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(710, 640, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        LineEntry = new QLineEdit(Manage_Database);
        LineEntry->setObjectName(QStringLiteral("LineEntry"));
        LineEntry->setGeometry(QRect(10, 590, 741, 41));
        pushButton = new QPushButton(Manage_Database);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(760, 590, 101, 41));
        verticalLayoutWidget = new QWidget(Manage_Database);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(880, 10, 321, 571));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        tableWidget = new QTableWidget(Manage_Database);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 851, 571));
        tableWidget->setAutoFillBackground(false);
        tableWidget->setAutoScroll(false);

        retranslateUi(Manage_Database);
        QObject::connect(buttonBox, SIGNAL(rejected()), Manage_Database, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), Manage_Database, SLOT(accept()));

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(Manage_Database);
    } // setupUi

    void retranslateUi(QDialog *Manage_Database)
    {
        Manage_Database->setWindowTitle(QApplication::translate("Manage_Database", "Dialog", 0));
        pushButton->setText(QApplication::translate("Manage_Database", "SEND", 0));
        pushButton_3->setText(QApplication::translate("Manage_Database", "Create Table", 0));
        pushButton_2->setText(QApplication::translate("Manage_Database", "Drop Table", 0));
        pushButton_5->setText(QApplication::translate("Manage_Database", "Create Index", 0));
        pushButton_4->setText(QApplication::translate("Manage_Database", "Erase Shell", 0));
    } // retranslateUi

};

namespace Ui {
    class Manage_Database: public Ui_Manage_Database {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGE_DATABASE_H
