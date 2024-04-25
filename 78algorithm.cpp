#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> v;

    //array should be sorted
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    cout << "Searching 3-> " << binary_search(v.begin(),v.end(),3) << endl; //returns 0 or 1
    cout << "Searching 5-> " << binary_search(v.begin(),v.end(),5) << endl;

    cout << "lower bound-> " << lower_bound(v.begin(),v.end(),5)-v.begin() << endl;
    cout << "upper bound-> " << upper_bound(v.begin(),v.end(),5)-v.begin() << endl;

    int a=3;
    int b=5;

    cout<< "Max: " << max(a,b) << endl;
    cout<< "Min: " << min(a,b) << endl;

    swap(a,b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "String: " << abcd << endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout << "After rotate: " << endl;
    for(int i:v) {
        cout << i << " ";
    } 
    cout << endl;

    sort(v.begin(), v.end());
    cout << "After sort: " << endl;
    for(int i:v) {
        cout << i << " ";
    } 
    cout << endl;

}