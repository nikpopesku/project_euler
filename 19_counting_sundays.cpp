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
    vector<int> days_by_month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_of_week = 0;
    int count_sundays = 0;

    for (int year = 1901; year <= 2000; ++year) {
        int day_limit = is_leap(year) ? 366 : 365;

        for (int day = 1; day <= day_limit; ++day) {
            if (day == 1 && day_of_week == 7) ++count_sundays;
        }
    }

    cout << count_sundays << '\n';
}
