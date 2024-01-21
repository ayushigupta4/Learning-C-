#include<iostream>
using namespace std;

int main() {
    unsigned int a = -112;
    cout << a << endl;

    int b = 2/5;
    cout << b << endl;

    bool bt = (a>b);
    cout << bt << endl;

    //Explicit typecasting
    float x = 4.987;
    int y = int(x);
    cout<< "Explicit typecasting: " << y << endl;
    
}