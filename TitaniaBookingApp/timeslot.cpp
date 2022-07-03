#include <iostream>
#include "timeslot.h"

//Constructors

/**
    Default constructor
*/
TimeSlot::TimeSlot() {
    taken = 0;
    time = 0;
    name = "N/A";
}

/**
    @param int new_time: The time this Timeslot represents in 24h formatting. Each reservation is for an hour.
*/
TimeSlot::TimeSlot(int new_time) {
    taken = 0;
    time = new_time;
    name = "N/A";
}


// Methods


// Setters
void TimeSlot::setName(QString new_name) {
    name = new_name;
}

void TimeSlot::setTime(int new_time) {
    time = new_time;
}

void TimeSlot::setDay(int new_day) {
    switch(new_day){
    case 0:
        day = "Monday";
        break;
    case 1:
        day = "Tuesday";
        break;
    case 2:
        day = "Wednesday";
        break;
    case 3:
        day = "Thursday";
        break;
    case 4:
        day = "Friday";
        break;
    case 5:
        day = "Saturday";
        break;
    case 6:
        day = "Sunday";
        break;
    }
}

void TimeSlot::setTaken() {
    taken = !taken;
}

// Getters
QString TimeSlot::getName() {
    return name;
}

QString TimeSlot::getDay() {
    return day;
}

bool TimeSlot::isTaken() {
    return taken;
}

int TimeSlot::getTime() {
    return time;
}
