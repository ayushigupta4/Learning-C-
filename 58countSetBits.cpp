#include<iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while( n!=0 ) {
        if(n&1)
            count++;

        n = n>>1;
    }
    
    return count;
}

int main() {
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int ans = (countSetBits(a) + countSetBits(b));
    cout << "Total Set Bits: " << ans << endl;

    return 0;
}