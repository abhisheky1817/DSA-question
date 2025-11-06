#include <bits/stdc++.h>
using namespace std;

string rightRotate(string s, int k) {
    int n = s.length();
    k = k % n;
    return s.substr(n - k) + s.substr(0, n - k);
}

string leftRotate(string s, int k) {
    int n = s.length();
    k = k % n;
    return s.substr(k) + s.substr(0, k);
}

int main() {
    string s, r;
    cin >> s >> r;

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        int k = arr[i];

        if (k > 0)
            s = rightRotate(s, k);
        else
            s = leftRotate(s, -k);
    }

    if (s == r)
        cout << "accepted";
    else
        cout << "try again";

}
