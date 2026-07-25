#include <iostream>

#define ll long long

constexpr int limit = 500;

using namespace std;

int main() {
    int count_divisors = 0;
    ll current_triangular_number = 0;
    ll last_number = 0;
    while (count_divisors <= limit) {
        count_divisors = 0;
        current_triangular_number += ++last_number;
        for (ll i = 1; i <= current_triangular_number / 2; ++i) {
            if (current_triangular_number % i == 0) ++count_divisors;
        }
        ++count_divisors;
        cout << current_triangular_number << ' ' << count_divisors << '\n';
    }

    cout << current_triangular_number << '\n';
}
