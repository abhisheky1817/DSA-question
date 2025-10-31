#include <bits/stdc++.h>
using namespace std;



int main() {
	// your code goes here
    
    
	int n;
	cin>>n;
	
	vector<int>v(n);
	
	for(int i=0;i<n;i++){
	    cin>>v[i];
	    
	}
	
    sort(v.begin(),v.end());
    
    int i =0;
    int j = v.size()-1;
    
    int k =0;
    while(i<j){
       
        
        cout<<v[i]<<" "<<v[j]<<" ";
        i++;
        j--;
    }
	

}
