#include<iostream>
using namespace std;

void reverse(int arr[], int n) {
    int start = 0;
    int end = n-1;

    while( start<=end ) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    int arr[10] = {1,6,3,8,9,12,33,16,-2,4};
    int brr[5] = {2,5,8,1,3};

    reverse(arr, 10);
    reverse(brr, 5);

    printArray(arr, 10);
    printArray(brr, 5);
}