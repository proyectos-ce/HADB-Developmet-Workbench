/********************************************************************************
** Form generated from reading UI file 'drop_table.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DROP_TABLE_H
#define UI_DROP_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Drop_Table
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;

    void setupUi(QDialog *Drop_Table)
    {
        if (Drop_Table->objectName().isEmpty())
            Drop_Table->setObjectName(QStringLiteral("Drop_Table"));
        Drop_Table->resize(630, 313);
        buttonBox = new QDialogButtonBox(Drop_Table);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(270, 270, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Drop_Table);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 271, 81));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        lineEdit = new QLineEdit(Drop_Table);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(230, 90, 171, 41));
        label_2 = new QLabel(Drop_Table);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 271, 81));
        label_2->setFont(font);

        retranslateUi(Drop_Table);
        QObject::connect(buttonBox, SIGNAL(accepted()), Drop_Table, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Drop_Table, SLOT(reject()));

        QMetaObject::connectSlotsByName(Drop_Table);
    } // setupUi

    void retranslateUi(QDialog *Drop_Table)
    {
        Drop_Table->setWindowTitle(QApplication::translate("Drop_Table", "Dialog", 0));
        label->setText(QApplication::translate("Drop_Table", "Drop Table", 0));
        label_2->setText(QApplication::translate("Drop_Table", "Table Name:", 0));
    } // retranslateUi

};

namespace Ui {
    class Drop_Table: public Ui_Drop_Table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DROP_TABLE_H
