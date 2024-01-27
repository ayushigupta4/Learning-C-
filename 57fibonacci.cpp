#include<iostream>
using namespace std;

int fibonacci(int n) {
    int a=0, b=1;
    int nextNum=0;
    for(int i=3; i<=n; i++) {
        nextNum = a+b;
        a=b;
        b=nextNum;
    }

    return nextNum;
}

int main() {
    int n;
    cout << "Enter position: ";
    cin >> n;

    int ans = fibonacci(n);
    cout << "Result: " << ans << endl;

    return 0;
}