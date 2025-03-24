
#include <iostream>
using namespace std;
int main()
{
    int weight, distance;

    cout << "Enter the weight of your package in kilograms: ";
    cin >> weight;
    cout << "Enter the distance in kilometers your package will be shipped: ";
    cin >> distance;
    if (weight <= 0 || weight > 20 || distance < 10 || distance < 3000) {
        cout << "Please enter a valid weight and distance";
    }
    else if (weight < 2 ) {
        cout << "The price of shipping is $" << ;
    }
    else if (weight >= 2 && weight < 6) {
        cout << "The price of shipping is $" << ;
    }
    else if (weight >= 6 && weight < 10) {
        cout << "The price of shipping is $" << ;
    }
    else if (weight >= 10 && weight < 20) {
        cout << "The price of shipping is $" << ;
    }
    return 0;
}