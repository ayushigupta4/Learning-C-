#include<iostream>
using namespace std;

int main() {
    int n = 10;
    cout << n << endl;

    if(true) {
        int n = 20;
        cout << "Inside if: " << n << endl;
    }
    
    cout << n << endl;
}