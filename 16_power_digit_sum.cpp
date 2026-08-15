#include <cmath>
#include <iostream>

#define ll long long

constexpr ll limit = 1'000;

using namespace std;

string string_multiply(const string &a, const string &b) {
    int caret = 0;
    string value = "0";

    for (ll i = static_cast<ll>(b.size()) - 1; i >= 0; --i) {
        string cv;
        for (ll j = static_cast<ll>(a.size()) - 1; j >= 0; --j) {
            const int val = caret + (a[j] - '0') * (b[i] - '0');
            cv += to_string(val % 10);
            caret = val / 10;
        }
        if (caret > 0) cv += '1';
        reverse(cv.begin(), cv.end());
        for (int j = 0; j < b.size() - 1 - i; ++j) cv += '0';

        caret = 0;
        string new_value;
        int k = value.size() - 1;
        int j = cv.size() - 1;
        for (; k >= 0 || j >= 0; --k, --j) {
            int val = caret + (k >= 0 ? value[k] - '0' : 0) + (j >= 0 ? cv[j] - '0' : 0);
            new_value += to_string(val % 10);
            caret = val / 10;
        }
        if (caret > 0) new_value += '1';
        reverse(new_value.begin(), new_value.end());
        value = new_value;
    }

    return value;
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
    const string s = pow("2", 4);
    ll response = 0;

    for (const char x: s) {
        response += x - '0';
    }

    cout << response;
}
