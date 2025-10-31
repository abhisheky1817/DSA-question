#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    
	}
	
	
	vector<int>ans(n);
	
	
	
 for (int i = 0; i < n; i++) {
        int count = 1;
        
        for (int j = 0; j < n; j++) {
            
            if (arr[i]<arr[j])
            
                count++;
        }
        ans[i] = count;
    }
    
	
	for(int i=0;i<n;i++){
	    cout<<ans[i]<<" ";
	}
	
	

}
