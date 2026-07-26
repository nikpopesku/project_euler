#include <iostream>
#include <set>
#include <vector>

#define ll long long

constexpr ll limit = 1'000'000;

using namespace std;


int main() {
    ll answer = 1;
    set<ll> st {};

    for (ll i = 2; i <= 20; ++i) {
        st.insert(static_cast<ll>(i));
    }


    for (ll i = 21; i <= 40; ++i) {
        answer *= i;
        vector<ll> erase {};
        for (auto &denominator: st) {
            if (answer % denominator == 0) {
                answer /= denominator;
                erase.push_back(denominator);
            }
        }

        for (auto &e: erase) {
            st.erase(e);
        }
    }

    cout << "answer " << answer << '\n';
}
