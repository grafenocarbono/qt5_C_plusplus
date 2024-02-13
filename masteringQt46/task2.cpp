#include "task2.h"
#include "ui_task2.h"

Task2::Task2(const QString& name, QWidget *parent):
    QWidget(parent),
    ui(new Ui::Task2){

    ui->setupUi(this);
    setName(name);
}

Task2::~Task2()
{
    delete ui;
}

void Task2::setName(const QString& name){
    ui->checkbox->setText(name);

}

QString Task2::name() const{
    return ui->checkbox->text();
}

bool Task2::isCompleted() const{
    return ui->checkbox->isChecked();
}
