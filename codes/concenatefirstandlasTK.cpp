#include <bits/stdc++.h>
using namespace std;

int main() {
 // your code goes here
 int n;
 cin>>n;
 cin.ignore();
 string s[n];
 int i;
 for(i=0;i<n;i++){
     cin>>s[i];
 }
 for(i=0;i<n/2;i++){
     string lp=s[i].substr(0,i+1);
     
     string rp = s[n-1-i].substr(s[n-1-i].size() - (i+1));  
     
        cout<<lp+rp;
        if(i!=n/2)  cout<<" ";
 }
 
 cout<<endl;
 

}