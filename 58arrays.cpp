#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "Print Array...";
    for(int i=0; i<size; i++) {
        cout<< arr[i] << " ";
    }
    cout << endl;
}

int main() {
    //declare
    int number[20];

    //accessing
    cout << "Value at 5th index: " << number[4] << endl;

    //initialising
    int second[3] = {1,2,4};
    cout << "Value at 2nd index in second: " << second[1] << endl;

    int third[15] = {2,5};
    //printing array
    printArray(third, 15);

    //initialising all locations with 0
    int fourth[10] = {0};
    printArray(fourth, 10);

    //using fill_n() to initialise with any value
    int fifth[10];
    fill_n(fifth,10,1);
    printArray(fifth, 10);

    //finding size of array
    int fifthSize = sizeof(fifth)/sizeof(int);
    cout << fifthSize<< endl;

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    for(int i=0; i<5; i++) {
        cout << ch[i] << " ";
    }
    cout << endl;

    double firstDouble[5];
    float firstFloat[4];
    bool firstBool[8];
   
    return 0;
}