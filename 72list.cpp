#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int> l;

    list<int> n(l); //l is copied to n
    list<int> k(5,100); //k initialised with 100, size=5

    l.push_back(4);
    l.push_front(5);

    cout<< "List: ";
    for(int i:l) cout << i << " ";
    cout<<endl;

    l.erase(l.begin());
    cout<< "After erase: ";
    for(int i:l) cout << i << " ";
    cout<<endl;

    cout << "Size -> " << l.size() <<endl;
}