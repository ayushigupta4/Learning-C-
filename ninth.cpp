//Convert fahrenheit to celsius
#include<iostream>
using namespace std;

int main() {
    float f;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;

    float c;
    c = ((f-32)*5)/9;
    cout << "Temperature in celsius: "<< c << endl;

}