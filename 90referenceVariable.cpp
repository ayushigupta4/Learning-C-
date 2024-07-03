#include<iostream>
using namespace std;

int main() {
    int i =10;
    int& j = i;
    cout << "i: " << i << endl;
    cout << "j: " << j << endl;
    i++;
    cout << "i: " << i << endl;
    j++;
    cout << "i: " << i << endl;

    return 0;
}