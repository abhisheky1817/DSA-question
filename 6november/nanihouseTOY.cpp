#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	
	vector<int>arr(n);
	
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	sort(arr.begin(),arr.end());
	
	int count = 0;
	int sum = 0;
	
	
	for(int i=0;i<n;i++){
	    
	    count = count+arr[i];
	    
	    if(count<5000){
	        sum++;
	    }
	    
	    
	}
	
	cout<<sum;
	
	
	

}
