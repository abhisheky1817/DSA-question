#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
		int n;
	cin>>n;
	
        vector<int>arr1(n);
        vector<int>arr2(n);
	
	for(int i=0;i<n;i++){
	    cin>>arr1[i];
	}
	
    for(int i=0;i<n;i++){
	    cin>>arr2[i];
	}
	
	vector<int>v;
	

    //merging two sorted array in a vector
    v.insert(v.end(), arr1.begin(), arr1.end());
    v.insert(v.end(), arr2.begin(), arr2.end());

	
	sort(v.begin(),v.end());
	
	
// 	int r1 = v.size()/2;
// 	int r2= (v.size()/2)-1;
	
	cout<<v[v.size()/2]+v[(v.size()/2)-1];

}
