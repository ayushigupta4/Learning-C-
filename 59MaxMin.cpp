#include<iostream>
#include<limits.h>
using namespace std;

int getMin(int num[], int size) {
    int mini = INT_MAX;

    for(int i=0; i<size; i++) {
        // if(num[i] < min){
        //     min = num[i];
        // }
        mini = min(num[i],mini);
    }

    return mini;
}

int getMax(int num[], int size) {
    int maxi = INT_MIN;

    for(int i=0; i<size; i++) {
        // if(num[i] > max){
        //     max = num[i];
        // }
        maxi = max(maxi, num[i]);
    }

    return maxi;
}

int main() {

    int size;
    cout << "Enter size: ";
    cin >> size;
    int arr[100];

    cout << "Enter values: " << endl;
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    cout << "Maximum: " << getMax(arr, size)<< endl;
    cout << "Minimum: " << getMin(arr, size)<<endl;

    return 0;
}