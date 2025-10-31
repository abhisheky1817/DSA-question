#include <bits/stdc++.h>
using namespace std;

 bool arm(int n){
     
     int a = n;
     int count = 0;
     
     int temp = n;
     
     while(temp>0){
         temp = temp/10;
         count++;
     }
    
    int sum = 0 ;
    temp = n;
    
     while(temp>0){
         int r = temp%10;
         
         int c = pow(r,count);
        
         
         sum = sum+c;
         
         temp = temp/10;
     }
     
     if(sum == a){
         return true;
     }
     else return false;
     
 }

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int k;
	cin>>k;
	vector<int>v;
	
	for(int i = n; i<=k;i++){
	    
	    if(arm(i)){
	        v.push_back(i);
	    }
	}
	
	if(v.size()==0) cout<<"-1";
	else{
	    for(int j = 0;j<v.size();j++){
	        cout<<v[j]<<" ";
	    }
	}

}
