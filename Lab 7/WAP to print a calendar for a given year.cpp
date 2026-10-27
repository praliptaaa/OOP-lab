WAP to print a calendar for a given year.



#include <iostream>
#include <iomanip>
#include <string>

int main() {

    int year;
    std::cout << "Enter year: ";
    if (!(std::cin >> year) || year < 1) {
        std::cerr << "Please enter a valid year greater than 0.\n";
        return 1;
    }

    const bool leapYear = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    const int daysInMonth[] = {31, leapYear ? 29 : 28, 31, 30, 31, 30,
                               31, 31, 30, 31, 30, 31};
    const std::string monthNames[] = {"January", "February", "March", "April",
                                      "May", "June", "July", "August",
                                      "September", "October", "November", "December"};

    // Calculate the weekday of January 1 (Sunday = 0).
    const long long yearsBefore = year - 1LL;
    int weekday = static_cast<int>((yearsBefore * 365 + yearsBefore / 4
                                    - yearsBefore / 100 + yearsBefore / 400 + 1) % 7);

    for (int month = 0; month < 12; ++month) {
        std::cout << "\n       " << monthNames[month] << ' ' << year << '\n';
        std::cout << " Su Mo Tu We Th Fr Sa\n";

        for (int i = 0; i < weekday; ++i) {
            std::cout << "   ";
        }
        for (int day = 1; day <= daysInMonth[month]; ++day) {
            std::cout << std::setw(3) << day;
            if ((weekday + day) % 7 == 0) {
                std::cout << '\n';
            }
        }
        if ((weekday + daysInMonth[month]) % 7 != 0) {
            std::cout << '\n';
        }
        weekday = (weekday + daysInMonth[month]) % 7;
    }

    return 0;
}