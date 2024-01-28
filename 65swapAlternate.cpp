#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int n) {
    for(int i=0; i<n; i+=2) {
        if(i+1 < n) {
            swap(arr[i], arr[i+1]);
        }
    }
}

int main() {
    int odd[5] = {4,3,7,5,6};
    int even[6] = {22,33,64,12,44,18};

    swapAlternate(odd,5);
    printArray(odd,5);
    swapAlternate(even, 6);
    printArray(even,6);
    
    return 0;
}