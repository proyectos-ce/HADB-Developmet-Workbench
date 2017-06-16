/********************************************************************************
** Form generated from reading UI file 'show_database.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_DATABASE_H
#define UI_SHOW_DATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Show_Database
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Show_Database)
    {
        if (Show_Database->objectName().isEmpty())
            Show_Database->setObjectName(QStringLiteral("Show_Database"));
        Show_Database->resize(1046, 595);
        buttonBox = new QDialogButtonBox(Show_Database);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(670, 550, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Show_Database);
        QObject::connect(buttonBox, SIGNAL(accepted()), Show_Database, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Show_Database, SLOT(reject()));

        QMetaObject::connectSlotsByName(Show_Database);
    } // setupUi

    void retranslateUi(QDialog *Show_Database)
    {
        Show_Database->setWindowTitle(QApplication::translate("Show_Database", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Show_Database: public Ui_Show_Database {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_DATABASE_H
