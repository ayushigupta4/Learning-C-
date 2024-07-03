#include<iostream>
using namespace std;

int& decrement(int num) {
    num--;
    int& ans = num;
    return ans;

}

void increment(int& num) {
    num++;
}

int main() {
    int num = 20;
    cout << "num before: " << num << endl;
    increment(num);
    cout << "num after: " << num << endl;
    num = decrement(num);
    cout << "num after decrement: " << num << endl;

    return 0;
}