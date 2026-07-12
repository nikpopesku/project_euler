#include <iostream>
#include <vector>

#define ll long long

using namespace std;


int main() {
    vector<ll> numbers = {2, 3, 2, 5, 7, 2, 3, 11, 13, 2, 17, 19};
    ll smallest_multiple = 1;

    for (const long long number : numbers) {
        smallest_multiple *= number;
    }

    cout << smallest_multiple;
}
