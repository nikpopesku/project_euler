#include <iostream>
#include <vector>

#define ll long long

using namespace std;


int main() {
    ll square_sum = 0;
    ll intermediate_sum = 0;
    for (ll i = 1; i <= 100; ++i) {
        square_sum += i * i;
        intermediate_sum += i;
    }

    cout << intermediate_sum * intermediate_sum - square_sum;
}
