#include<iostream>
using namespace std;

void update(int **p2) {
    //p2 = p2 +1;
    //*p2 = *p2 +1;
     **p2 = **p2 +1;
}

int main() {
    int i = 5;
    int *p1 = &i;
    int **p2 = &p1;

    cout << "i: " << i << endl;
    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;

    update(p2);
    cout << "After" << endl;

    cout << "i: " << i << endl;
    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;

    return 0;
}