#ifndef SCHEDULEWINDOW_H
#define SCHEDULEWINDOW_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class schedulewindow;
}

class schedulewindow : public QDialog
{
    Q_OBJECT

public:
    explicit schedulewindow(QWidget *parent = nullptr);
    ~schedulewindow();

private slots:
    void on_tableWidget_cellActivated(int row, int column);

private:
    Ui::schedulewindow *ui;
    MainWindow mainWindow;
    std::vector<std::vector<TimeSlot>> calendar;
};

#endif // SCHEDULEWINDOW_H
