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
	
	vector<int>v(n);
	
		
	for(int i=0;i<n;i++){
	    v[i]=arr[i];
	    
	}
	
	sort(v.begin(),v.end());
	
	int count=0;
	
	for(int i=0;i<n;i++){
	    
	    if(arr[i]!=v[i])  count++;
	    
	}
	
	cout<<count;
	

}
