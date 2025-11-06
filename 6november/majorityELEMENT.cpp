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
	
	//a function to count and store
	//int arr1 = (arr.begin(),arr.end(),arr[i]);
	
	
	sort(arr.begin(),arr.end());
	
	int a = arr.size();
	
    int count = 0;
    
    for(int i =0;i<n;i++){
        if(arr[a]==arr[i]) count++;
    }
    
    if(count>a/2) cout<<arr[a];
    else cout<<"no majority element";
	
	


}
