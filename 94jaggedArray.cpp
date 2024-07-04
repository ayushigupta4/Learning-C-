//using static array of pointers
#include<iostream>
using namespace std;

int main() {
    int row1[] = {1,2,3};
    int row2[] = {4};
    int row3[] = {5,6};

    int* jagged[] = {row1, row2, row3};
    int sizes[] = {3,1,2};

    cout << "Printing elements in matrix for: " << endl;
    for(int i=0; i<3; i++) {
        int* ptr = jagged[i];

        for(int j=0; j<sizes[i]; j++) {
            cout << *(ptr+j) << " ";
        }
        cout << endl;
    }


    return 0;
}