#include <bits/stdc++.h>
using namespace std;

void jumpingN(int n){
    
    for(int i =0;i<=n;i++){
        
        if(i<=10){
            cout<<i<<" ";
        }
        else{
            int a = i;
            
            bool flag = true;
            
            while(a>10){
                
                int r1 = a%10;
                
                 a=a/10;
                 
                int r2 = a%10;
                
                if((r1-r2)==1 || (r1-r2)== -1){
                   continue;
                }
                else{
                    flag = false;
                    break;
                }
            }
            
            if(flag==true) cout<<i<<" ";
            
            
        }
    }
}

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	
	jumpingN(n);

}
