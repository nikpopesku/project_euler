#include <iostream>
#include <vector>

using namespace std;

bool is_leap(const int year) {
    if (year % 4 != 0) return false;
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;

    return true;
}


int main() {
    vector<int> first_month_day_normal = {1, 32, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};
    vector<int> first_month_day_leap = {1, 32, 61, 92, 122, 153, 183, 214, 245, 275, 306, 336};
    int count_sundays = 0;
    int day_of_week = 0;

    for (int year = 1901; year <= 2000; ++year) {
        const bool leap = is_leap(year);
        const int day_limit = leap ? 366 : 365;
        int month_counter = 0;


        for (int day = 1; day <= day_limit; ++day) {
            day_of_week = (day_of_week + 1) % 7;
            if (month_counter < 11) {
                if (day == first_month_day_normal[month_counter + 1] - 1) {
                    ++month_counter;
                } else if (leap && day >= first_month_day_leap[month_counter + 1] - 1) {
                    ++month_counter;
                }
            }

            if (day == first_month_day_normal[month_counter] && day_of_week == 6) {
                ++count_sundays;
            } else if (leap && day == first_month_day_leap[month_counter] && day_of_week == 7) {
                ++count_sundays;
            }
        }
    }

    cout << count_sundays << '\n';
}
