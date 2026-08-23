#include <iostream>
#include <vector>

constexpr ll limit = 1'000;

using namespace std;


using namespace std;

int main() {
    int cnt = 0;

    // Arrays to hold the spelling building blocks
    const vector<string> ones = {
        "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
        "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",
        "Seventeen", "Eighteen", "Nineteen"
    };

    const vector<string> tens = {
        "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
    };


    for (int i = 1; i <= limit; ++i) {
        if (i >= 100) {
            cnt += ones[i / 100].size();
            cnt += 10; //hundred and
        }

        cnt += tens[(i % 100) / 10].size();
        cnt += ones[i % 10].size();
    }

    cout << cnt << '\n';
}
