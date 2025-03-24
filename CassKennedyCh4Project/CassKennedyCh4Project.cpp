
#include <iostream>
using namespace std;
int main()
{
    int weight, distance;
    float lowWeightFare, lowMidWeightFare, midWeightFare, highWeightFare;
    lowWeightFare = 1.1;
    lowMidWeightFare = 2.2;
    midWeightFare = 3.7;
    highWeightFare = 4.8;

    cout << "Enter the weight of your package in kilograms: ";
    cin >> weight;
    cout << "Enter the distance in kilometers your package will be shipped: ";
    cin >> distance;
    if (weight <= 0 || weight > 20 || distance < 10 || distance < 3000) {
        cout << "Please enter a valid weight and distance";
    }
    else if (weight < 2 ) {
        cout << "The price of shipping is $" << ((distance / 500.0) + (1 - ((distance / 500.0)) % 1)) *lowWeightFare;
    }
    else if (weight >= 2 && weight < 6) {
        cout << "The price of shipping is $" << ((distance / 500.0) + (1 - ((distance / 500.0)) % 1)) * lowMidWeightFare;
    }
    else if (weight >= 6 && weight < 10) {
        cout << "The price of shipping is $" << ((distance / 500.0) + (1 - ((distance / 500.0)) % 1)) * midWeightFare;
    }
    else if (weight >= 10 && weight < 20) {
        cout << "The price of shipping is $" << ((distance / 500.0) + (1 - ((distance / 500.0)) % 1)) * highWeightFare;
    }
    return 0;
}