
#include <iostream>
using namespace std;
int main()
{
    //The next six lines initialize the necessary variables. The last four lines set up the rate for each package weight class.
    int weight, distance;
    float lowWeightFare, lowMidWeightFare, midWeightFare, highWeightFare, priceCounter;
    lowWeightFare = 1.1;
    lowMidWeightFare = 2.2;
    midWeightFare = 3.7;
    highWeightFare = 4.8;

    //These lines get the user to enter the necessary information.
    cout << "Enter the weight of your package in kilograms: ";
    cin >> weight;
    cout << "Enter the distance in kilometers your package will be shipped: ";
    cin >> distance;

    //This calculates the distance class by checking if the distance entered is within groups of 500.
    if (distance >= 10 && distance <= 500) { priceCounter = 1; }
    else if (distance > 500 && distance <= 1000) { priceCounter = 2; }
    else if (distance > 1000 && distance <= 1500) { priceCounter = 3; }
    else if (distance > 1500 && distance <= 2000) { priceCounter = 4; }
    else if (distance > 2000 && distance <= 2500) { priceCounter = 5; }
    else if (distance > 2500 && distance <= 3000) { priceCounter = 6; }


    /*This chooses what to display based on the weight of the package.
    After it chooses the weight class, it displays the price (or an error message) by multiplying the rate by the distance class.
    The 0s at the end of the couts are to make the formatting look better.*/
    if (weight <= 0 || weight > 20 || distance < 10 || distance > 3000) {
        cout << "Please enter a valid weight and distance";
    }
    else if (weight <= 2) {
                cout << "The price of shipping is $" << priceCounter*lowWeightFare << "0";
    }
    else if (weight > 2 && weight <= 6) {
        cout << "The price of shipping is $" << priceCounter*lowMidWeightFare << "0";
    }
    else if (weight > 6 && weight <= 10) {
        cout << "The price of shipping is $" << priceCounter*midWeightFare << "0";
    }
    else if (weight > 10 && weight <= 20) {
        cout << "The price of shipping is $" << priceCounter*highWeightFare << "0";
    }
    return 0;
}