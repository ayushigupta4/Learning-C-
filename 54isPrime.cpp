#include<iostream>
using namespace std;

bool isPrime(int num) {
    for(int i=2; i<num; i++) {
        if(num%i==0)
            return 0;
    }

    return 1;
}

int main() {
    int p;
    cout << "Enter number: ";
    cin >> p;

    bool result = isPrime(p);
    if(result)
        cout << "Prime number!";
    else   
        cout << "Not a prime number!";

    return 0;
}