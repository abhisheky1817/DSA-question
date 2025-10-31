#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k,n,m;
    cin>>k>>n>>m;
    cin.ignore();
    string s;
    
    for(int i=0;i<k;i++){
        cin>>s[i];
    }
    int count =0;
    
     for(int i=0;i<k;i++){
         
        if(int(s[i])>=n && int(s[i])<=m){
            count++;
        }
    }
    
    cout<<count;
    
    
    
    
    

}
