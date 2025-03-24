
#include <iostream>
using namespace std;
int main()
{
    int month, year;

    cout << "Enter the month then the year as numbers with a space in between: ";
    cin >> month;
    cin >> year;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        cout << "The month has 31 days";
    }
    else if (month != 2) {
        cout << "The month has 30 days";
    }
    else {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            cout << "The month has 29 days.";
        }
        else {
            cout << "The month has 28 days.";
        }
    }
}