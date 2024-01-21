#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: " << endl;
    ch = cin.get();
    
    if(ch >= 'a' && ch <='z'){
        cout << "This is lowercase" << endl;
    }
    else if(ch >= 'A' && ch<= 'Z'){
        cout << "This is uppercase" << endl;
    }
    else{
        cout << "This is numeric" << endl;
    }
}