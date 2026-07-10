#include <iostream>

#define ll long long

using namespace std;

int main() {
    ll val = 0;
    ll sum_odd_perfect_squares = 0;
    for (ll i = 1; i < 708000; ++i) {
        val = i * i;
        if (val % 2 == 1) {
            sum_odd_perfect_squares += val;
        }
    }

    cout << sum_odd_perfect_squares << '\n';
}