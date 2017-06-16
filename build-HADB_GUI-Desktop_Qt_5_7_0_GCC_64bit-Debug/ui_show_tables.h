/********************************************************************************
** Form generated from reading UI file 'show_tables.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_TABLES_H
#define UI_SHOW_TABLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Show_Tables
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Show_Tables)
    {
        if (Show_Tables->objectName().isEmpty())
            Show_Tables->setObjectName(QStringLiteral("Show_Tables"));
        Show_Tables->resize(809, 549);
        buttonBox = new QDialogButtonBox(Show_Tables);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(440, 500, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Show_Tables);
        QObject::connect(buttonBox, SIGNAL(accepted()), Show_Tables, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Show_Tables, SLOT(reject()));

        QMetaObject::connectSlotsByName(Show_Tables);
    } // setupUi

    void retranslateUi(QDialog *Show_Tables)
    {
        Show_Tables->setWindowTitle(QApplication::translate("Show_Tables", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Show_Tables: public Ui_Show_Tables {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_TABLES_H
