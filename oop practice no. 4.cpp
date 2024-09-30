#include <iostream>

using namespace std;

class Time {
public:
    int hours, minutes, seconds;

    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    Time operator+(const Time& other) {
        int totalSeconds = hours * 3600 + minutes * 60 + seconds +
                           other.hours * 3600 + other.minutes * 60 + other.seconds;
        int newHours = totalSeconds / 3600;
        totalSeconds %= 3600;
        int newMinutes = totalSeconds / 60;
        int newSeconds = totalSeconds % 60;
        return Time(newHours, newMinutes, newSeconds);
    }
};

int main() {
    Time time1, time2, sum;

    cout << "Enter the first time (hours minutes seconds): ";
    cin >> time1.hours >> time1.minutes >> time1.seconds;

    cout << "Enter the second time (hours minutes seconds): ";
    cin >> time2.hours >> time2.minutes >> time2.seconds;

    sum = time1 + time2;

    cout << "The sum of the two times is: ";
    sum.display();

    return 0;
}
