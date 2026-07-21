#include <iostream>

#define ll long long

using namespace std;

constexpr int MX = 2'000'000;

int main() {
    bool arr[MX] = {true};
    ll sum_primes = 0;

    for (int i = 2; i < MX; ++i) {
        if (arr[i] == false) continue;
        sum_primes += static_cast<ll>(i);

        for (int j = i; j < MX; j += i) {
            arr[j] = false;
        }
    }

    cout << sum_primes;
}
