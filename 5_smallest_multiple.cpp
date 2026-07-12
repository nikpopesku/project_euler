#include <iostream>
#include <vector>

#define LL long long

using namespace std;


int main() {
    int mx = -1;
    for (int i = 999; i >= 111; --i) {
        if (i * 999 <= mx) continue;

        for (int j = 999; j >= 111; --j) {
            const int val = i * j;
            if (val <= mx) continue;

            string st = to_string(val);
            string st2 = st;
            reverse(st2.begin(), st2.end());

            if (st == st2) mx = val;
        }
    }

    cout << mx;
}
