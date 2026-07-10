#include <iostream>

#define ll long long

using namespace std;

int main() {
    int sum_multiplies = 0;

    for (int i = 3; i < 1000; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum_multiplies += i;
        }
    }

    cout << sum_multiplies;
}