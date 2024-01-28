#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void update(int arr[], int n) {
    arr[0] = 120;
    printArray(arr,3);
}

int main() {
    int arr[3] = {1,2,3};
    printArray(arr,3);
    update(arr,3);
    printArray(arr,3);

    return 0;
}