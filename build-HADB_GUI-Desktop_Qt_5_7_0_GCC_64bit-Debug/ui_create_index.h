/********************************************************************************
** Form generated from reading UI file 'create_index.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_INDEX_H
#define UI_CREATE_INDEX_H

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

class Ui_Create_Index
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Create_Index)
    {
        if (Create_Index->objectName().isEmpty())
            Create_Index->setObjectName(QStringLiteral("Create_Index"));
        Create_Index->resize(527, 285);
        buttonBox = new QDialogButtonBox(Create_Index);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(150, 230, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(Create_Index);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(280, 51, 141, 41));
        label = new QLabel(Create_Index);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 33, 261, 81));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);
        label_2 = new QLabel(Create_Index);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 90, 101, 41));
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);

        retranslateUi(Create_Index);
        QObject::connect(buttonBox, SIGNAL(accepted()), Create_Index, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Create_Index, SLOT(reject()));

        QMetaObject::connectSlotsByName(Create_Index);
    } // setupUi

    void retranslateUi(QDialog *Create_Index)
    {
        Create_Index->setWindowTitle(QApplication::translate("Create_Index", "Dialog", 0));
        label->setText(QApplication::translate("Create_Index", "Create Index", 0));
        label_2->setText(QApplication::translate("Create_Index", "<html><head/><body><p>&lt;TABLE&gt;</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Create_Index: public Ui_Create_Index {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_INDEX_H
