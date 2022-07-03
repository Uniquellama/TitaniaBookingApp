#ifndef SCHEDULE_H
#define SCHEDULE_H
#include "timeslot.h"
#include <vector>

class Schedule
{
private:
    static int const days = 7;
    static int const hours = 24;
    // 2d vector to act as a calendar. Rows represent days, columns represent hours
    std::vector<std::vector<TimeSlot>> calendar;
public:
    // Constructors
    Schedule();

    // Methods
    void fill_calendar();


    bool unreserve(TimeSlot slot);

    // Setters

    // Getters
    std::vector<std::vector<TimeSlot>> getCalendar();
    static int getDays();
    static int getHours();
};


#endif // SCHEDULE_H
