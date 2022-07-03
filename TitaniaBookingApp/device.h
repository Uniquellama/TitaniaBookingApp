#ifndef DEVICE_H
#define DEVICE_H
#include "schedule.h"
#include <QString>

class Device
{
private:
    Schedule schedule;
    QString name;

public:
    // Constructors
    Device(Schedule new_schedule, QString new_name);

    // Getters
    Schedule getSchedule();
    QString getName();

};

#endif // DEVICE_H
