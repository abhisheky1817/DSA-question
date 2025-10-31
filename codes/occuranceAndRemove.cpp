#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   vector<int>v;
   
   for(int i=0;i<9;i++){
       int x;
       cin>>x;
       v.push_back(x);
   }
   
   int k =1;
   
   int frq  = count(v.begin(),v.end(),1);
   
   v.erase(v.begin()+frq);
   
    
   for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
   }
   
    
}
