#include<iostream>
using namespace std;

char getMaxOccCharacter(string s) {
    int arr[26] = {0};

    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        int number = 0;
        //lowercase
        if(ch >= 'a' && ch <= 'z') {
            number = ch-'a';
        }
        else { //uppercase
            number = ch - 'A';
        }
        arr[number]++;
    }

    int maxi = -1, ans = 0;;
    for(int i=0; i<26; i++) {
        if(maxi < arr[i]) {
            maxi = arr[i];
            ans = i;
        }
    }

    return ans+'a';
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Max Occurring character: " << getMaxOccCharacter(s);

    return 0;
}