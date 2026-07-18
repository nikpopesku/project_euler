#include <iostream>

#define ll long long

using namespace std;

constexpr int max_a = 333;
constexpr int max_b = 499;
constexpr int max_c = 997;

int main() {
    for (int a = 1; a <= max_a; ++a) {
        for (int b = a + 1; b <= max_b; ++b) {
            for (int c = b + 1; c <= max_c; ++c) {
                if (a + b + c == 1000 && a * a + b * b == c * c) {
                    cout << a << ' ' << b << ' ' << c << ' ' << a * b * c;

                    return 0;
                }
            }
        }
    }
}