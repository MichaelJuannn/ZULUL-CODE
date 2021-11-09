// C++ program to display 7 days of 3 weeks

#include <iostream>
using namespace std;

int main() {
    int weeks, days_in_week = 7;
    cout << "how many weeks u want ?";
    cin >> weeks;

    for (int i = 1; i <= weeks; ++i) {
        cout << "Week: " << i << endl;

        for (int j = 1; j <= days_in_week; ++j) {
            cout << "    Day:" << j << endl;
        }
    }

    return 0;
}