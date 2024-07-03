#include<iostream>
using namespace std;

int main() {
    int i = 5;
    int *p1 = &i;
    int **p2 = &p1;

    cout << "address of i: " << &i << endl;

    cout << "printing p1: " << p1 << endl;
    cout << "address of p1: " << &p1 << endl;

    cout << "printing p2: " << p2 << endl;
    cout << "address of p2: " << &p2 << endl;
    cout << "value at p2: " << *p2 << endl;

    cout << "*p1 = " << *p1 << endl;
    cout << "**p2 = " << **p2 << endl;


    return 0;
}