#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    while( i<=n ){
        int space = 1;
        while(space < i){
            cout << " ";
            space++;
        }

        int j = space;
        while( j<=n ){
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}