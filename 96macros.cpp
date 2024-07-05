#include<iostream>
using namespace std;

#define PI 3.14
#define Max(a,b) (((a) > (b))? (a) : (b))

int main() {
    int r = 3;
    double area = PI * r * r;
    cout << "Area is " << area << endl;

    cout << "Max is " << Max(25, 56) << endl;

    return 0; 
}