#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<string> s;

    s.push("ayushi");
    s.push("cutie");
    s.push("gupta");

    cout << "Top element-> " << s.top() << endl;

    s.pop();
    cout << "Top element-> " << s.top() << endl;

    cout << "Size of stack-> " << s.size() << endl;

    cout << "Is empty-> " <<s.empty() << endl;
}