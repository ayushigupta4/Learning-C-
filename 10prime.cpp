//Check whether prime number
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    int i = 2;
    int limit = sqrt(n);
    while(i <= limit) {
        if( n%i == 0 ){
            cout << "Not Prime" << endl;
            return 0;
        }
        else    
            i=i+1;
    }
    
    cout << "Prime" << endl;
}