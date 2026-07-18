#include <iostream>
#include <vector>

#define ll long long

using namespace std;

constexpr ll MX = 200'000;

int main() {
    vector<bool> prime(MX, true);
    ll counter = 0;

    for (ll i = 2; i < MX; ++i) {
        if (!prime[i]) continue;
        ++counter;

        if (counter == 10'001) {
            cout << i;

            return 0;
        }

        for (ll j = 2 * i; j < MX; j += i) prime[j] = false;
    }

    cout << counter;
}
