add two time objects using friend function


#include <iostream>
class Time {
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}
    friend Time operator+(const Time& t1, const Time& t2) {
        int totalSeconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds +
                           t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
        int newHours = totalSeconds / 3600;
        totalSeconds %= 3600;
        int newMinutes = totalSeconds / 60;
        int newSeconds = totalSeconds % 60;
        return Time(newHours, newMinutes, newSeconds);
    }
};