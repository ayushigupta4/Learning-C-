#include<iostream>
using namespace std;

int arithmaticProgression(int n) {
    int ans= (3 * n) + 7;
    return ans;
}

int main() {
    int n;
    cout << "Enter position: ";
    cin >> n;

    int ans = arithmaticProgression(n);

    cout << n << "th term: " << ans << endl;

    return 0;
}