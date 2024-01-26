//Convert a decimal number to binary
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    float answer = 0;
    int i = 0;

    while( num!=0 ) {
        int bit = num&1;
        //cout<<bit<<endl;
        answer = (answer + (bit * (pow(10, i))));
        
        num = num>>1;
        i++;
    }
    cout << "Answer: " << answer;
}