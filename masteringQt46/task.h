#ifndef TASK_H
#define TASK_H

#include <QString>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Task;
}
QT_END_NAMESPACE

class Task : public QWidget
{
    Q_OBJECT

public:
    Task(const QString &name, QWidget *parent = nullptr);
    ~Task();

    void setName(const QString &name);
    QString name() const;
    bool isCompleted() const;

private:
    Ui::Task *ui;
};

#endif // TASK_H
