#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        // if left is not alphabet, move forward
        if (!isalpha(s[left])) {
            left++;
        }
        // if right is not alphabet, move backward
        else if (!isalpha(s[right])) {
            right--;
        }
        // both are alphabets -> swap
        else {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

    cout << s;
}
