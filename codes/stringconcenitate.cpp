#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	char c;
	int n;
    getline(cin,s);
    cin>>c>>n;
    
    string s1 = "";
    int count = 0;
    
    int m = s.length();
    
    for(int i =0;i<m;i++){
        
        s1 = s1 + s[i];
        count++;
        if(count ==n){
            s1 = s1+c;
            count=0;
        }
        //count++;
    }
    
    for(int i =0;i<s1.length();i++){
        cout<<s1[i];
    }

}
