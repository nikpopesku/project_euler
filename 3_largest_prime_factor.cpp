#include <iostream>
#include <vector>

#define LL long long

constexpr LL NUM = 600'851'475'143;
using namespace std;

vector<LL> get_factors(LL val) {
    vector<LL> factor;
    for (LL i = 2; i * i <= val; ++i) {
        if (val % i == 0) {
            factor.push_back(i);
        }
    }

    return factor;
}

int main() {
    const auto factors = get_factors(NUM);

    for (LL i = static_cast<int>(factors.size()) - 1; i >= 0; --i) {
        auto val = get_factors(factors[i]);

        if (val.empty()) {
            cout << factors[i];

            return 0;
        }
    }
}
