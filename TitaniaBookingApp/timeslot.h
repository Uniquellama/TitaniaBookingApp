#ifndef TIMESLOT_H
#define TIMESLOT_H
#include <QString>

class TimeSlot
{
private:
    bool taken;
    QString name;
    int time;
    QString day;

public:
    // Constructors

    TimeSlot();
    TimeSlot(int new_time);

    // Methods


    // Setters
    void setName(QString new_name);
    void setTime(int new_time);
    void setDay(int new_day);
    void setTaken();

    // Getters
    QString getName();
    QString getDay();
    bool isTaken();
    int getTime();
};

#endif // TIMESLOT_H
