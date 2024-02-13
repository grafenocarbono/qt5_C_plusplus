#ifndef TASK2_H
#define TASK2_H

#include <QWidget>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui {
class Task2;
}
QT_END_NAMESPACE

class Task2 : public QWidget
{
    Q_OBJECT

public:
    Task2(const QString& name, QWidget *parent = nullptr);
    ~Task2();

    void setName(const QString& name);
    QString name() const;
    bool isCompleted() const;
private:
    Ui::Task2 *ui;
};

#endif // TASK2_H
