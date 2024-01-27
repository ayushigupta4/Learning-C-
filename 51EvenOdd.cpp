#include<iostream>
using namespace std;

bool isEven(int n) {
    if(n&1)
        return 0;
    else 
        return 1;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    bool res = isEven(n);
    if(res)
        cout << "Even number!";
    else
        cout << "Odd number!";

    return 0;
}