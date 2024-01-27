#include<iostream>
using namespace std;

int main() {
    int num = 1;
    cout << endl;

    switch(num) {
        case 1: cout << "First" << endl;
                break;
        case 2: cout << "Second" << endl;
                break;
        default: cout << "This is default" << endl;
    }
    cout << endl;

    char ch = '2';

    switch(ch) {
        case '1': cout << "First character" << endl;
                break;
        case '2': cout << "Nested Switch" << endl;
                    switch(num) {
                        case 1: cout << "Value of num: " << num << endl;
                                break;
                    }
                break;
        default: cout << "This is default character" << endl;
    } 
    cout << endl;

    return 0;
}