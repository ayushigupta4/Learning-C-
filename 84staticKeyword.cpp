#include<iostream>
using namespace std;

class Hero {
    public:
    static int timeToComplete;
};

//datatype class_name :: field_name = value;
int Hero::timeToComplete = 5;

int main() {
    cout << Hero::timeToComplete << endl;

}