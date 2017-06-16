/********************************************************************************
** Form generated from reading UI file 'show_structure.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_STRUCTURE_H
#define UI_SHOW_STRUCTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Show_Structure
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *labelgif;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *Show_Structure)
    {
        if (Show_Structure->objectName().isEmpty())
            Show_Structure->setObjectName(QStringLiteral("Show_Structure"));
        Show_Structure->resize(1022, 745);
        buttonBox = new QDialogButtonBox(Show_Structure);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(640, 680, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        labelgif = new QLabel(Show_Structure);
        labelgif->setObjectName(QStringLiteral("labelgif"));
        labelgif->setGeometry(QRect(10, 0, 541, 741));
        label = new QLabel(Show_Structure);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(470, 200, 441, 81));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label_3 = new QLabel(Show_Structure);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(470, 270, 441, 81));
        label_3->setFont(font);
        label_2 = new QLabel(Show_Structure);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-20, 0, 1041, 751));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        label_4 = new QLabel(Show_Structure);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(460, 20, 601, 111));
        QFont font1;
        font1.setFamily(QStringLiteral("Tlwg Mono"));
        font1.setPointSize(48);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_5 = new QLabel(Show_Structure);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 33, 1001, 81));
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(134, 142, 149);"));
        label_2->raise();
        label_5->raise();
        labelgif->raise();
        buttonBox->raise();
        label->raise();
        label_3->raise();
        label_4->raise();

        retranslateUi(Show_Structure);
        QObject::connect(buttonBox, SIGNAL(accepted()), Show_Structure, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Show_Structure, SLOT(reject()));

        QMetaObject::connectSlotsByName(Show_Structure);
    } // setupUi

    void retranslateUi(QDialog *Show_Structure)
    {
        Show_Structure->setWindowTitle(QApplication::translate("Show_Structure", "Dialog", 0));
        labelgif->setText(QString());
        label->setText(QApplication::translate("Show_Structure", "CURRENT IP: 172.16.254.1", 0));
        label_3->setText(QApplication::translate("Show_Structure", "CURRENT PORT: 8001", 0));
        label_2->setText(QString());
        label_4->setText(QApplication::translate("Show_Structure", "HADB Structure", 0));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Show_Structure: public Ui_Show_Structure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_STRUCTURE_H
