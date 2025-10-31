#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<string> s(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++) {
        
        int len = s[i].length();
        int k = abs(arr[i]) % len;

        if (arr[i] > 0) {
            
            cout << s[i].substr(len - k) + s[i].substr(0, len - k) << endl;
        } else {
         
            cout << s[i].substr(k) + s[i].substr(0, k) << endl;
        }
    }

    return 0;
}
