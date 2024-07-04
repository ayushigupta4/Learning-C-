//using dynamic 2D arrays
#include<iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter no. of rows: ";
    cin >> row;

    //creating row array - dynamic array of pointers
    int** arr = new int*[row];
    int* sizes = new int[row];

    cout << "Enter sizes of columns: ";

    for(int i=0; i<row; i++) {
        cin >> sizes[i];
        *(arr + i) = new int[sizes[i]];
    }

    cout << "Input elements: ";
    for(int i=0; i<row; i++) {
        for(int j=0; j<sizes[i]; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Printing array: " << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<sizes[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout <<endl;
    }

    return 0;
}