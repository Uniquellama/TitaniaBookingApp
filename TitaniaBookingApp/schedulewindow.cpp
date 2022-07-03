#include "schedulewindow.h"
#include "ui_schedulewindow.h"
#include "device.h"
#include "schedule.h"
#include "timeslot.h"

schedulewindow::schedulewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::schedulewindow)
{
    ui->setupUi(this);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->plainTextEdit->setFixedHeight(30);

    std::vector<Device> devicesList = mainWindow.getDevicesList();
    calendar = devicesList[0].getSchedule().getCalendar();

    calendar[0][0].setTaken();
    calendar[0][0].setName("Bob");

    calendar[0][1].setTaken();
    calendar[0][1].setName("Michael");

    calendar[1][2].setTaken();
    calendar[1][2].setName("Alice");

    calendar[1][9].setTaken();
    calendar[1][9].setName("Mary");

    calendar[4][15].setTaken();
    calendar[4][15].setName("Paul");


    for (int i = 0; i < calendar.size(); i++) {
        for (int j = 0; j < calendar[0].size(); j++) {
            calendar[i][j].setDay(i);
            calendar[i][j].setTime(j);

            if(calendar[i][j].isTaken()) {
                ui->tableWidget->setItem(i, j, new QTableWidgetItem(calendar[i][j].getName()));
            }
        }
    }

    // Turns true on first empty spot
    bool bar = false;

    // Loop through calendar. Add onto a counter for each busy slot until the first free one.
    int counter = 0;
    for (int i = 0; i < calendar.size(); i++) {
        for (int j = 0; j < calendar[0].size(); j++) {
            if(calendar[i][j].isTaken() && !bar)
                counter++;
            else
                bar = true;
            }
        }

    ui->plainTextEdit->setPlainText(QVariant(counter).toString() + " hours until next free");


}

schedulewindow::~schedulewindow()
{
    delete ui;
}

void schedulewindow::on_tableWidget_cellActivated(int row, int column)
{
   TimeSlot timeSlot = calendar[row][column];
   if(!timeSlot.isTaken()) {
       timeSlot.setTaken();
       timeSlot.setName("Matt");
       ui->tableWidget->setItem(row, column, new QTableWidgetItem(timeSlot.getName()));
   }
}
