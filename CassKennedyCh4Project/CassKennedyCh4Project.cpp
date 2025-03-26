
#include <iostream>
using namespace std;
int main()
{
    int month, year; //Initiallizing variables.

    //Getting the necessary information.
    cout << "Enter the month then the year as numbers with a space in between: ";
    cin >> month;
    cin >> year;
    /*Next is a set of if / else statements that determine what number of days the month has.
    First it checks if the user entered an odd number month-- if they did it displays as such.
    If they did not, the program checks that they didn't enter Feburary, and if they didn't, then it displays 30 days
    If they did enter Feburary, the program has an if/else statement to check the year, and it will decide if it's a leap year or not and display the corresponding numbers.*/
    if (month < 1 || month > 12) {
        cout << "Enter a valid month."; //Error message.
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
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
    return 0;
}