#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector< vector<int> > ans;
    int K = 12;
    vector<vector<int>> arr = {{10}, {5}, {5}, {5}, {2}};
    int n = 5;

    for (int i = 0; i < n; ++i) {
        std::sort(arr[i].begin(), arr[i].end());
    }

    for (int i = 0; i < n; i++) {
        int low = i + 1;
        int high = n - 1;
        int value = K - arr[i][0]; // Access the first element of arr[i]

        while (low < high) {
            if (arr[low][0] + arr[high][0] == value) {
                vector<int> temp;
                temp.push_back(arr[low][0]);
                temp.push_back(arr[high][0]);
                ans.push_back(temp);
            }

            // Move low and high pointers
            low++;
            high--;
        }
    }

    // Print the result
    for (const auto& pair : ans) {
        cout << "(" << pair[0] << ", " << pair[1] << ")" << endl;
    }

    return 0;
}
