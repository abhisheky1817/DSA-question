// char ch = tolower(s[j]); // to convert lower case from upper

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool found= false;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        bool hasVowel = false;

        for (char ch : s) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                hasVowel = true;
                break;
            }
        }

        if (!hasVowel) {
            cout << s << " ";
            found = true;
        }
    }

    if (!found) {
        cout << -1;
    }

}
