#include<iostream>
using namespace std;

inline int getMax(int& a, int& b) {
    return (a > b)? a : b;
}

int main() {
    int a=20, b=25;
    cout << getMax(a,b) << endl;

    a +=7;
    b -=10;

    cout << getMax(a,b) << endl;
}