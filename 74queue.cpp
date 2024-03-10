#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<string> q;

    q.push("nobita");
    q.push("shuzuka");
    q.push("Gian");

    cout << "First element: " << q.front() << endl;
    cout << "Size before pop: " << q.size() <<endl;
    q.pop();
    cout << "Size after pop: " << q.size() <<endl;
    cout << "First element: " << q.front() << endl;


}