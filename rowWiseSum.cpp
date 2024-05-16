#include<iostream>
using namespace std;

void printRowSum(int arr[][4], int row, int col) {

    cout << "Printing row-wise sum ->" << endl;
    for(int i=0; i<row; i++) {
        int sum =0;
        for(int j=0; j<col; j++) {
            sum = sum + arr[i][j];
        }

        cout << sum << endl;
    }
}

void printColSum(int arr[][4], int row, int col) {

    cout << "Printing Column-wise sum ->" << endl;
    for(int i=0; i<col; i++) {
        int sum =0;
        for(int j=0; j<row; j++) {
            sum = sum + arr[j][i];
        }

        cout << sum << endl;
    }
}

int main() {
    int arr[3][4];

    cout << "Enter array: ";
    for(int i=0;i<3; i++) {
        for(int j=0; j<4; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<3; i++) {
        for(int j=0; j<4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    printRowSum(arr,3,4);
    printColSum(arr,3,4);

    return 0;
}