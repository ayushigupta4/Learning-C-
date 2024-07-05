#include<iostream>
using namespace std;

void sayDigits(int n) {
    string say[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if(n==0) return;

    sayDigits(n/10);

    cout << say[n%10] << " ";
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    sayDigits(n);

    return 0;
}