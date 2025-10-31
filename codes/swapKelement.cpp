#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,k;
    cin>>n>>k;
    
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    int i=0;
    int j=k;
    int count = 0;
    
    while(j<n){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] =temp;
        
        i++;
        j++;
        count++;
        
        if(count==k){
            i=j;
            j=i+k;
        }
        
        
    }
    
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   
    
}
