#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "schedulewindow.h"
#include "schedule.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->listView->setModel(&model);

    // Make list names uneditable
    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    // Initialise the list with devices
    Schedule sch1;
    Device comp1(sch1, "Comp1");
    deviceList.push_back(comp1);

    Schedule sch2;
    Device comp2(sch2, "Comp2");
    deviceList.push_back(comp2);

    Schedule sch3;
    Device comp3(sch3, "Comp3");
    deviceList.push_back(comp3);

    // Fill a list with all device names
    QStringList foo;
    for(int i = 0; i < deviceList.size(); i++) {
        foo.append(deviceList[i].getName());
    }

    // Display device names on the list
    model.setStringList(foo);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_listView_doubleClicked(const QModelIndex &index)
{
    schedulewindow scheduleWindow;
    scheduleWindow.setModal(true);
    scheduleWindow.exec();
}

std::vector<Device> MainWindow::getDevicesList() {
    return deviceList;
}
