#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    string r;

    cin >> s >> r;

    int n;
    cin >> n;

    int arr[n];
    int a = s.length();

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        int k = arr[i] % a;  // rotation value within string length

        if (k > 0)
            s = s.substr(a - k) + s.substr(0, a - k);  // right rotation
        else if (k < 0) {
            k = -k;
            s = s.substr(k) + s.substr(0, k);  // left rotation
        }
        // if k == 0, no rotation needed
    }

    if (s == r)
        cout << "accepted";
    else
        cout << "try again";

    return 0;
}
