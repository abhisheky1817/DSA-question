#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int m;
        cin>>m;
        int arr[m];
        
        for (int j = 0; j < m; j++) {
            cin >> arr[j];
        }

        int maxi = *max_element(arr, arr + m);
        int mini =  *min_element(arr, arr + m);
        int  sum = accumulate(arr, arr+m ,0);
    
        
        float average = (float)sum/m;
        
        cout<< maxi<<" "<<mini<<" "<<sum<<" ";
        cout<<fixed<<setprecision(1)<<average<<endl;
    }

    
}
