#include<iostream>
using namespace std;

int main() {
    int arr[10] = {23, 122, 41, 67};
    int i = 2;
    cout<< i[arr] << endl;

    int arr2[10];
    //arr = arr +1; -> error

    int *ptr = &arr2[0];
    cout << ptr << endl;
    ptr = ptr +1;
    cout << ptr << endl;

    cout << "CHARACTER ARRAYS" << endl;

    char ch[] = "abcde";
    cout << ch << endl;
    char *c = &ch[0];
    cout << c << endl;

    char temp = 'z';
    char *r = &temp;
    cout << r << endl;


    return 0;
}