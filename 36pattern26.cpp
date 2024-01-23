#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    int i = 1;
    while( i<=n ){
        int space = n-i;
        while(space){
            cout << " ";
            space--;
        }

        int j = 1;
        while( j<=i ){
            cout << j;
            j++;
        }
        j = i-1;
        while( j ){
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
}