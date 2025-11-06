#include <bits/stdc++.h>
using namespace std;

int main() {
   
   string s;
   cin>>s;
   
  
   string r ="";
   
   string a ="";
   
   for(int i =0;i<s.length();i++){
       if((i+1)%4==0 || (i+1)%6==0)
        r = r+s[i];
       else a = a +s[i];
   }
   
   
   string res ="";
   
   res = res + a;
   res = res +r;
   
   
   cout<<res;
}
