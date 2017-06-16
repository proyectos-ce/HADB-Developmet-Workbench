/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *ShowNodes_BUTTON;
    QPushButton *ShowTables_BUTTON;
    QPushButton *Manage_Database_BUTTON;
    QPushButton *ShowStructure_BUTTON;
    QPushButton *ShowComponents_BUTTON;
    QPushButton *ShowMetadata_BUTTON;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(1011, 619);
        gridLayoutWidget = new QWidget(Menu);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(200, 190, 791, 431));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ShowNodes_BUTTON = new QPushButton(gridLayoutWidget);
        ShowNodes_BUTTON->setObjectName(QStringLiteral("ShowNodes_BUTTON"));
        ShowNodes_BUTTON->setSizeIncrement(QSize(0, 0));
        ShowNodes_BUTTON->setCheckable(false);
        ShowNodes_BUTTON->setAutoDefault(false);
        ShowNodes_BUTTON->setFlat(false);

        gridLayout->addWidget(ShowNodes_BUTTON, 0, 1, 1, 1);

        ShowTables_BUTTON = new QPushButton(gridLayoutWidget);
        ShowTables_BUTTON->setObjectName(QStringLiteral("ShowTables_BUTTON"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ShowTables_BUTTON->sizePolicy().hasHeightForWidth());
        ShowTables_BUTTON->setSizePolicy(sizePolicy);
        ShowTables_BUTTON->setAcceptDrops(false);

        gridLayout->addWidget(ShowTables_BUTTON, 0, 0, 1, 1);

        Manage_Database_BUTTON = new QPushButton(gridLayoutWidget);
        Manage_Database_BUTTON->setObjectName(QStringLiteral("Manage_Database_BUTTON"));

        gridLayout->addWidget(Manage_Database_BUTTON, 2, 1, 1, 1);

        ShowStructure_BUTTON = new QPushButton(gridLayoutWidget);
        ShowStructure_BUTTON->setObjectName(QStringLiteral("ShowStructure_BUTTON"));

        gridLayout->addWidget(ShowStructure_BUTTON, 2, 0, 1, 1);

        ShowComponents_BUTTON = new QPushButton(gridLayoutWidget);
        ShowComponents_BUTTON->setObjectName(QStringLiteral("ShowComponents_BUTTON"));

        gridLayout->addWidget(ShowComponents_BUTTON, 1, 1, 1, 1);

        ShowMetadata_BUTTON = new QPushButton(gridLayoutWidget);
        ShowMetadata_BUTTON->setObjectName(QStringLiteral("ShowMetadata_BUTTON"));

        gridLayout->addWidget(ShowMetadata_BUTTON, 1, 0, 1, 1);

        label = new QLabel(Menu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 70, 561, 71));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Mono"));
        font.setPointSize(72);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Menu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-120, 50, 621, 111));
        label_2->setStyleSheet(QLatin1String("\n"
"background-color: rgb(170, 170, 255);"));
        label_3 = new QLabel(Menu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 190, 1101, 661));
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(182, 182, 182);"));
        label_4 = new QLabel(Menu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(600, 470, 391, 151));
        label_4->setStyleSheet(QLatin1String("\n"
"background-color: rgb(170, 170, 255);"));
        label_3->raise();
        label_4->raise();
        label_2->raise();
        gridLayoutWidget->raise();
        label->raise();

        retranslateUi(Menu);

        ShowNodes_BUTTON->setDefault(false);


        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Form", 0));
        ShowNodes_BUTTON->setText(QApplication::translate("Menu", "Show Nodes", 0));
        ShowTables_BUTTON->setText(QApplication::translate("Menu", "Show Tables", 0));
        Manage_Database_BUTTON->setText(QApplication::translate("Menu", "Manage DataBase", 0));
        ShowStructure_BUTTON->setText(QApplication::translate("Menu", "Show Structure", 0));
        ShowComponents_BUTTON->setText(QApplication::translate("Menu", "Show Components", 0));
        ShowMetadata_BUTTON->setText(QApplication::translate("Menu", "Show Metadata", 0));
        label->setText(QApplication::translate("Menu", "HADB Menu", 0));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
