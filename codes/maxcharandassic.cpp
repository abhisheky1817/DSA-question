#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	cin.ignore();
	string s;
	getline(cin,s);
	
	int m = s.length();
	char c = s[0];
	int max = int(s[0]);
	
	for(int i=0;i<m;i++){
	    
	    if(int(s[i])>max){
	        max = int(s[i]);
	        c = s[i];
	    }
	}
    
    cout<<c<<max;
}
