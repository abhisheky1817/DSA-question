#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	string s1;
	cin>>s1;
	string s2;
	cin>>s2;
   
   int i=0;
   int j=0;
   
   string s ="";
   
   while(i<s1.length() && j<s2.length()){
       
       if(s1[i]==s2[j]){
          
           s= s+ s2[j];
            i++;
           j++;
       }
       else if(s1[i]!=s2[j]){
           i++;
       }
       
   }
   cout<<s<<endl;
   
   if(s2==s)  cout<<"true";
   else cout<<"false";
	
	
	

}
