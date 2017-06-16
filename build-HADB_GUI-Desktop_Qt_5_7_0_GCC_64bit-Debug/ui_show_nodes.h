/********************************************************************************
** Form generated from reading UI file 'show_nodes.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_NODES_H
#define UI_SHOW_NODES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Show_Nodes
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Show_Nodes)
    {
        if (Show_Nodes->objectName().isEmpty())
            Show_Nodes->setObjectName(QStringLiteral("Show_Nodes"));
        Show_Nodes->resize(874, 578);
        buttonBox = new QDialogButtonBox(Show_Nodes);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(510, 530, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Show_Nodes);
        QObject::connect(buttonBox, SIGNAL(accepted()), Show_Nodes, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Show_Nodes, SLOT(reject()));

        QMetaObject::connectSlotsByName(Show_Nodes);
    } // setupUi

    void retranslateUi(QDialog *Show_Nodes)
    {
        Show_Nodes->setWindowTitle(QApplication::translate("Show_Nodes", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Show_Nodes: public Ui_Show_Nodes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_NODES_H
