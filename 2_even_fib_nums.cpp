#include <iostream>

#define ll long long

constexpr ll MX = 4'000'000;

using namespace std;

int main() {
    ll p1, p2;
    ll sum_even_terms = 0;

    for (p1 = 1, p2 = 2; p2 < MX;) {
        if (p2 % 2 == 0) {
            sum_even_terms += p2;
        }

        const ll tmp = p1;
        p1 = p2;
        p2 = p2 + tmp;
    }

    cout << sum_even_terms;
}
