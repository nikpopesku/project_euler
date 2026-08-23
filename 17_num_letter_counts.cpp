#include <iostream>

#define ll long long

constexpr ll limit = 1'000;

using namespace std;

// Arrays to hold the spelling building blocks
const vector<string> ONES = {
    "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
    "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", 
    "Seventeen", "Eighteen", "Nineteen"
};

const vector<string> TENS = {
    "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
};

using namespace std;

int main() {
    int cnt = 0;

    for (int i = 1; i <= limit; ++i) {
        if (i >= 100) {
            cnt += ONES[i / 100].size();
            cnt += 10; //hundred and
        }

        cnt += TENS[(i % 100) / 10].size();
        cnt += ONES[i % 10].size();
    }

    cout << cnt << '\n';
}
