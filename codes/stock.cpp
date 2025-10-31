#include <bits/stdc++.h>
using namespace std;

int main() {
        
    int n=2;
    
    while(n--){
        
    int m;
    cin>>m;
    int arr[m];
    
    int max = 0;
    
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    
     for(int i=0;i<m;i++){
        
         //int max = 0;
         
        for(int j=i+1;j<m;j++){
            
          if((arr[j]-arr[i])>max){
              max = (arr[j]-arr[i]);
          } 
          
            
        }
        
    }
    
    cout<<max<<endl;
    
    }
    
	    
}
