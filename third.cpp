#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    if(n>0){
        cout << "n is positive" << endl;
    }
    else{
        cout << "n is negative" << endl;
    }

    int x,y;
    cout << "Enter X and Y: " << endl;
    cin >> x >> y;
    if(x>y)
        cout << "X is greater" << endl;
    if(y>x)
        cout << "Y is greater" << endl;

    /*int p;
    p = cin.get();
    cout << "Value of p is " << p << endl; */

    int l;
    cout << "Enter value of l: " << endl;
    cin >> l;

    if(l > 0){
        cout << "l is positive" << endl;
    }
    else if(l < 0){
        cout << "l is negative" << endl;
    }
    else{
        cout << "l is zero";
    }

}