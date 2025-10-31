#include <bits/stdc++.h>
using namespace std;

//for two digit only
void jumpingN(int n){
    
    for(int i =0;i<=n;i++){
        
        if(i<=10){
            cout<<i<<" ";
        }
        else{
            int a = i;
             
             int r1 = a% 10;
             a= a/10;
             int r2 = a%10;
             
             int c = r1-r2;
             
             if(c==1 || c==-1)  cout<<i<<" ";
            
        }
    }
}

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	
	jumpingN(n);

}
