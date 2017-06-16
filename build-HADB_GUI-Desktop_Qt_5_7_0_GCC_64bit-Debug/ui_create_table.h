/********************************************************************************
** Form generated from reading UI file 'create_table.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_TABLE_H
#define UI_CREATE_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Create_Table
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *Create_Table)
    {
        if (Create_Table->objectName().isEmpty())
            Create_Table->setObjectName(QStringLiteral("Create_Table"));
        Create_Table->resize(670, 346);
        buttonBox = new QDialogButtonBox(Create_Table);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(290, 300, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Create_Table);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 221, 61));
        QFont font;
        font.setFamily(QStringLiteral("Padauk Book [SIL ]"));
        font.setPointSize(22);
        label->setFont(font);
        lineEdit = new QLineEdit(Create_Table);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 90, 131, 31));
        label_2 = new QLabel(Create_Table);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 91, 61));
        label_2->setFont(font);
        label_3 = new QLabel(Create_Table);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 130, 221, 61));
        label_3->setFont(font);
        lineEdit_2 = new QLineEdit(Create_Table);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 140, 451, 31));
        plainTextEdit = new QPlainTextEdit(Create_Table);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(60, 210, 261, 71));
        plainTextEdit->setReadOnly(true);

        retranslateUi(Create_Table);
        QObject::connect(buttonBox, SIGNAL(accepted()), Create_Table, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Create_Table, SLOT(reject()));

        QMetaObject::connectSlotsByName(Create_Table);
    } // setupUi

    void retranslateUi(QDialog *Create_Table)
    {
        Create_Table->setWindowTitle(QApplication::translate("Create_Table", "Dialog", 0));
        label->setText(QApplication::translate("Create_Table", "Create Table", 0));
        label_2->setText(QApplication::translate("Create_Table", "Name:", 0));
        label_3->setText(QApplication::translate("Create_Table", "Parameters:", 0));
        plainTextEdit->setPlainText(QApplication::translate("Create_Table", "Example:\n"
"Name: Student\n"
"Parameters: (NAME STRING(10), ID INT, PRIMARY KEY ID)", 0));
    } // retranslateUi

};

namespace Ui {
    class Create_Table: public Ui_Create_Table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_TABLE_H
