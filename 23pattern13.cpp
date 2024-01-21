#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int count = 1;
    int i = 1;
    while( i<=n ){
        int j = 1;
        while( j<=n){
            cout << char('A'+count-1) << " ";
            count = count + 1;
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
}