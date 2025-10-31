#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,k;
    cin>>n>>k;
    cin.ignore();
    
    string s;
    getline(cin,s);
    int a = n-(2*k);
    string str = s.substr(k,a);
    
    cout<<str;
}
