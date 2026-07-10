#include <iostream>
#include <vector>

#define ll long long

constexpr ll NUM = 600'851'475'143;
using namespace std;

vector<ll> get_factors(ll val) {
    vector<ll> factor;
    for (ll i = 2; i * i <= val; ++i) {
        if (val % i == 0) {
            factor.push_back(i);
        }
    }

    return factor;
}

int main() {
    const auto factors = get_factors(NUM);

    for (ll i = static_cast<int>(factors.size()) - 1; i >= 0; --i) {
        if (auto val = get_factors(factors[i]); val.empty()) {
            cout << i;

            return 0;
        }
    }
}
