#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int n = s.length() / 2;

    string s1 = s.substr(0, n);
    string s2 = s.substr(n);
    
    //it return void so no storing

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    string t = s1 + s2;

    cout << t;
}
