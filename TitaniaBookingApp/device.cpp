#include "device.h"

/**
 * @brief Device::Device Each device has a name to identify it and schedule with which it can be booked
 * @param new_schedule
 * @param new_name
 */
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
