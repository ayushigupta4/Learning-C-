#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << i << endl;
    }

    //using variables in for loop
    for(int a=0, b=1; a>=0 && b<=n; a++, b++){
        cout << a << " " << b << endl;
    }
}