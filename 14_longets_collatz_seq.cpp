#include <iostream>

#define ll long long

constexpr ll limit = 1'000'000;

using namespace std;


int main() {
    ll mx_seq = 0;
    ll mx_seq_num = 0;

    for (ll i = 2; i < limit; ++i) {
        ll counter = 1;
        ll num = i;

        while (num != 1) {
            if (num % 2 == 0) {
                num = num / 2;
            } else {
                num = 3 * num + 1;
            }
            ++counter;
        }
        cout << i << ' ' << counter << '\n';
        if (counter > mx_seq) {
            mx_seq = counter;
            mx_seq_num = i;
        }
    }

    cout << mx_seq << ' ' << mx_seq_num << '\n';
}
