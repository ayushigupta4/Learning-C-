#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    while( i<=n ){
        int space = 1;
        while( space<i ) {
            cout << " ";
            space++;
        }
        int j = n-i+1;
        while( j ){
            cout <<i;
            j=j-1;
        }
        cout << endl;
        i=i+1;
    }
}