#include<iostream>
using namespace std;

int sumOfArray(int arr[], int size) {
    int sum = 0;
    for(int i=0; i<size; i++) {
        sum = sum + arr[i];
    }

    return sum;
}

int main() {
    int arr[10] = {2, 4, 6, 3, -5, 7, 14, -3, 9, 16};

    int sum = sumOfArray(arr, 10);

    cout << "Sum: " << sum;

    return 0;
}