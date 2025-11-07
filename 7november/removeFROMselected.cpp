#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    string s2;
    
    cin>>s1>>s2;
    
    string ans= "";  
    
    for(int i=0; i<s1.length(); i++){
        bool find = false; 
        
        for(int j=0; j<s2.length(); j++){
            
            if (s1[i]==s2[j]) {
                find=true; 
                break;
            }
        }
        
        if(find==false){  
            ans = ans+s1[i];
        }
    }
    
    cout<<ans;
}
