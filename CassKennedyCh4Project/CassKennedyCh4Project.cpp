
#include <iostream>
using namespace std;
int main()
{
    //Setting up the necessary variables.
    int choice;
    float pi, radius, length, width, base, height;
    pi = 3.14159;

    //Sets up a menu with four choices -- circle, rectangle, triangle, and quit. The first three will calculate the are of that shape.
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the area of a Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter the number that corresponds to the type of shape you would like to find the area of.\n";
    cin >> choice;
    //Sets up a switch case to calculate and display the area of a shape.
        switch (choice) {
        case 1:
            cout << "Enter the radius of the circle ";
            cin >> radius;
            if (radius < 0) {
                cout << "Enter a positive radius"; //Error message.
            }
            else {
                cout << radius * radius * pi << " u^2";
            } //This is pi*radius^2 expressed as r*r*pi.
            break;
        case 2:
            cout << "Enter the rectangle's side lengths ";
            cin >> length;
            cin >> width;
            if (length < 0 || width < 0) {
                cout << "Enter positive side lengths"; //Error message.
            }
            else {
                cout << length * width << " u^2"; //This is the side lengths multiplied together.
            }
            break;
        case 3:
            cout << "Enter the base and height of the triangle ";
            cin >> base;
            cin >> height;
            if (base < 0 || height < 0) {
                cout << "Enter positive dimensions"; //Error message.
            }
            else {
                cout << 0.5 * base * height << " u^2"; //This is the area of the triangle's dimensions multiplied and halved.
            }
            break;
        case 4:
            cout << "Goodbye"; //Ends the program without calculation.
            break;
        default:
            cout << "Please enter a valid option\n"; //Error message.
}
    return 0;
}