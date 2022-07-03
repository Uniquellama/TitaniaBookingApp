#include "device.h"

Device::Device(Schedule new_schedule, QString new_name) {
    schedule = new_schedule;
    schedule.fill_calendar();
    name = new_name;
}

Schedule Device::getSchedule() {
    return schedule;
}

QString Device::getName() {
    return name;
}
