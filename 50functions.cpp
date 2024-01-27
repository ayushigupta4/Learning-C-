#include<iostream>
using namespace std;

int findPower(int x, int y) {
    int ans = 1;
    for(int i=1 ; i<=y ; i++) {
        ans = ans * x;
    }

    return ans;
}

int main() {

    int a,b;
    cout << "Enter number: ";
    cin >> a;
    cout << "Enter power: ";
    cin >> b;

    int ans = findPower(a,b);
    cout << "Answer: " << ans << endl; 
    return 0;
}