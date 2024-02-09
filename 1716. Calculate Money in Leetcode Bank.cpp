#include <iostream>
using namespace std;

class Solution {
public:
    int totalMoney(int n) {
        int weeks = n / 7;
        int extraDays = n % 7;

        int total = 0;


        total += (28 * weeks) + 7 * (weeks * (weeks - 1) / 2);


        total += (extraDays * (extraDays + 1)) / 2 + extraDays * weeks;

        return total;
    }
};

int main() {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    Solution s;
    int x = s.totalMoney(n);
    cout << "Total money earned: " << x << endl;

    return 0;
}
