#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;

    string result = "";
    int count = 1;

    for (int i = 0; i < s.length(); i++) {
        if (i < s.length() - 1 && s[i] == s[i + 1]) {
            count++;
        } else {
            if (count >= n) {
                result += s[i] + to_string(count);
            } else {
                result.append(count, s[i]);  // repeat s[i] count times
            }
            count = 1;
        }
    }

    cout << result;
    
}
