#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int,string> m;
    m[1] = "Shinchan";
    m[5] = "manny";
    m[12] = "masao";

    m.insert({7,"Bo"});

    for(auto i:m) {
        cout<<i.first << " " << i.second << endl;
    }

    cout << "Finding 13-> " << m.count(13) << endl;

    m.erase(12);
    for(auto i:m) {
        cout<<i.first << " " << i.second << endl;
    }

    auto it = m.find(5);

    cout<< "Value at it-> " << (*it).second << endl;
}