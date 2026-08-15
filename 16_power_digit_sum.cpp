#include <cmath>
#include <iostream>

#define ll long long

constexpr ll limit = 1'000;

using namespace std;

string string_multiply(string a, string b) {
    return a;
}

string pow(string a, ll b) {
    string response = "1";

    while (b > 0) {
        if (b % 2 == 1) {
            response = string_multiply(response, a);
            --b;
        } else {
            b >>= 1;
            a = string_multiply(a, a);
        }
    }

    return response;
}

int main() {
    const string s = pow("2", 1000);
    ll response = 0;

    for (const char x: s) {
        response += x - '0';
    }

    cout << response;
}
