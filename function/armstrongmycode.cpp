#include <bits/stdc++.h>
using namespace std;

void arm(int n) {
    int a = n;
    int count = 0;
    
    // Count digits
    int temp = n;
    while (temp > 0) {
        temp = temp / 10;
        count++;
    }
    
    int sum = 0;
    temp = n;
    
    // Calculate sum of each digit raised to 'count'
    while (temp > 0) {
        int r = temp % 10;
        
        int c = 1;
        for (int i = 0; i < count; i++) {
            c = c * r;
        }
        
        sum += c;
        temp = temp / 10;
    }
    
    // Compare with the original number
    if (sum == a) {
        cout << a << " ";
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    
    for (int i = n; i <= k; i++) {
        arm(i);
    }

    return 0;
}
