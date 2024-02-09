//number of currency notes
#include<iostream>
using namespace std;

int main() {
    int amt;
    cout << "Enter total amount: ";
    cin >> amt;
    int x,y,z;

    switch(1) {
        case 1: x = amt/100;
                amt = amt%100;
                cout << x << " x 100Rs " << endl;

        case 2: y = amt/50;
                amt = amt%50;
                cout << y << " x 50Rs " << endl;
        
        case 3: z = amt/20;
                amt = amt%20;
                cout << z << " x 20Rs " << endl;
        
        case 4: cout << amt << " x 1Rs " << endl;
                break;

        default: cout << "Invalid entry";
    }

    return 0;

}