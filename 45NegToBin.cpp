//Issue persist - Resolve
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int bin = 0;
    int i=0;

    if ( n<0 ) {
        n = n*(-1);
        while( n!=0) {
            int bit = n&1;
            bin = (bit*(pow(10,i))) + bin;
            n = n>>1;
            i++;
        }
    }

    float answer = 1;
    while( bin!=0 ){
        int bit = bin&1;
        if(bit){
            bit = 0;
        }
        else{
            bit = 1;
        }
        answer = (answer*10)+bit;
        bin = bin>>1;
    }
    answer = answer + 1;
    cout << "Answer: " << answer;
}