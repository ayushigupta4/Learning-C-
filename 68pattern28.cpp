#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int i=1;
    while(i<=n) {
        int space = n-i;
        for(int p=1; p<=space; p++) {
            cout << " ";
        }

        int j = 2*i -1;
        while(j) {
            cout << "*";
            j--;
        }

        for(int p=1; p<=space; p++) {
            cout << " ";
        }
        cout << endl;
        i++;
    }

    return 0;
}