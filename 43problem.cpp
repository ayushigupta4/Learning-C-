//Difference between Product and sum of digits
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int product=1, sum=0;

    for(int i=n ; i>0 ; i=(i/10)) {
        int digit = i%10;
        product = product*digit;
        sum = sum+digit;
    }

    cout << "Result: " << (product-sum) << endl;
}