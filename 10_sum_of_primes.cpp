#include <iostream>

#define ll long long

using namespace std;

constexpr int mx = 2'000'000;

int main() {
    array<bool, mx> arr{};
    ll sum_primes = 0;
    arr.fill(true);

    for (int i = 2; i < mx; ++i) {
        if (arr[i] == false) continue;
        sum_primes += static_cast<ll>(i);

        for (int j = i; j < mx; j += i) {
            arr[j] = false;
        }
    }

    cout << sum_primes;
}
