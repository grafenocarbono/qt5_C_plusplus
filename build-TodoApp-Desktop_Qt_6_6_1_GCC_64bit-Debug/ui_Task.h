/********************************************************************************
** Form generated from reading UI file 'Task.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_H
#define UI_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_centralwidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkbox;
    QSpacerItem *horizontalSpacer;
    QPushButton *editButton;
    QPushButton *removeButton;

    void setupUi(QWidget *centralwidget)
    {
        if (centralwidget->objectName().isEmpty())
            centralwidget->setObjectName("centralwidget");
        centralwidget->resize(738, 253);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkbox = new QCheckBox(centralwidget);
        checkbox->setObjectName("checkbox");

        horizontalLayout->addWidget(checkbox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        editButton = new QPushButton(centralwidget);
        editButton->setObjectName("editButton");

        horizontalLayout->addWidget(editButton);

        removeButton = new QPushButton(centralwidget);
        removeButton->setObjectName("removeButton");

        horizontalLayout->addWidget(removeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(centralwidget);

        QMetaObject::connectSlotsByName(centralwidget);
    } // setupUi

    void retranslateUi(QWidget *centralwidget)
    {
        centralwidget->setWindowTitle(QCoreApplication::translate("centralwidget", "Form", nullptr));
        checkbox->setText(QCoreApplication::translate("centralwidget", "Buy Milk", nullptr));
        editButton->setText(QCoreApplication::translate("centralwidget", "Edit", nullptr));
        removeButton->setText(QCoreApplication::translate("centralwidget", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class centralwidget: public Ui_centralwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_H
