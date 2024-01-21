#include<iostream>
using namespace std;

int main() {
    int a = 2;
    int b = a+1;

    if((a=3) == b){
        cout << a << endl;
    }
    else{
        cout << a+1 << endl;
    }

    //cout << "a: " << a << endl;

    int x = 24;
    if(x > 20){
        cout << "p" << endl;
    }
    else if(a == 24){
        cout << "q" << endl;
    }
    else{
        cout << "r" << endl;
    }
    cout << "x: " << x << endl;
}