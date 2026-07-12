#include <iostream>
#include <vector>

#define ll long long

using namespace std;


int main() {
    vector<ll> numbers = {2LL, 3LL, 2LL, 5LL, 7LL, 2LL, 3LL, 11LL, 13LL, 2LL, 17LL, 19LL};
    ll smallest_multiple = 1;

    for (int i = 0; i <= static_cast<int>(numbers.size()); ++i) {
        smallest_multiple *= numbers[i];
    }

    cout << smallest_multiple;
}
