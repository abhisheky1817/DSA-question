#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr,arr+n,greater<int>());
    
    
     int  sum = accumulate(arr, arr+5 ,0);
    
    cout<<sum;
    
    cout<<endl;
    
     for(int i=n-5;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    
    
}
