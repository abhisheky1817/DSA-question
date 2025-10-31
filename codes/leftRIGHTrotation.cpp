#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	cin.ignore();
	
	string s;
	getline(cin,s);
	
	k = k%n;
	
	cout<<s.substr(k)+s.substr(0,k)<<endl;
	cout<<s.substr(n-k)+s.substr(0,n-k);
	

}
