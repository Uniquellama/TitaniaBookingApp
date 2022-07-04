#include <iostream>
#include "schedule.h"

Schedule::Schedule() {

}


// Methods

/**
 * @brief Schedule::fill_calendar     Create calendar with rows representing the days of the week, columns representing hours of the day, initialising all slots as untaken.
    Iterate through each day and set time and day of slot.
 */
void Schedule::fill_calendar() {

    int rows = Schedule::getDays();
    int columns = Schedule::getHours();

    calendar.resize(rows, std::vector<TimeSlot>(columns));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            calendar[i][j].setDay(i);
            calendar[i][j].setTime(j);
        }
    }
}
// Setters

// Getters
    std::vector<std::vector<TimeSlot>> Schedule::getCalendar() {
    return calendar;
}

int Schedule::getDays() {
    return days;
}

int Schedule::getHours() {
    return hours;
}
