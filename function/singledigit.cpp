#include <bits/stdc++.h>
using namespace std;

 int sum(int n){
     
      while(n>10){
          
        int sum = 0;
        
        while(n>0) {
            
            sum = sum + n%10;
            
            n = n/ 10;
        }
        n = sum;
    }
    
    return n;
 }

int main() {
	// your code goes here
	
	int N;
	cin>>N;
	
	int K;
	cin>>K;
	
   string str = to_string(N);
   
   string s = "";
   
   while(K){
       s = s+str;
       K--;
   }
   
   
   int num = 0;
   
   for(char ch: s){
       num += ch - '0';
   }
   
   
   cout<<sum(num);
   
 
}
