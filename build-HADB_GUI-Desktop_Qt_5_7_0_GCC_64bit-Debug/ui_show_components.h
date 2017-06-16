/********************************************************************************
** Form generated from reading UI file 'show_components.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_COMPONENTS_H
#define UI_SHOW_COMPONENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Show_Components
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Show_Components)
    {
        if (Show_Components->objectName().isEmpty())
            Show_Components->setObjectName(QStringLiteral("Show_Components"));
        Show_Components->resize(1040, 626);
        buttonBox = new QDialogButtonBox(Show_Components);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(660, 570, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Show_Components);
        QObject::connect(buttonBox, SIGNAL(accepted()), Show_Components, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Show_Components, SLOT(reject()));

        QMetaObject::connectSlotsByName(Show_Components);
    } // setupUi

    void retranslateUi(QDialog *Show_Components)
    {
        Show_Components->setWindowTitle(QApplication::translate("Show_Components", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Show_Components: public Ui_Show_Components {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_COMPONENTS_H
