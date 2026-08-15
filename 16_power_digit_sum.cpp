#include <cmath>
#include <iostream>

#define ll long long

constexpr ll limit = 1'000;

using namespace std;

string string_multiply(const string &a, const string &b) {
    int caret = 0;
    string value;

    for (ll i = b.size() - 1; i >= 0; --i) {
        string current_value;
        for (ll j = a.size() - 1; j >= 0; --j) {
            const int val = caret + (a[j] - '0') * (b[i] - '0');
            current_value += to_string(val % 10);
            caret = val / 10;
        }
        reverse(current_value.begin(), current_value.end());
        for (int j = 0; j < b.size() - 1 - i; ++j) current_value += '0';
    }
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
