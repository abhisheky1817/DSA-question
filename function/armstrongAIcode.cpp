#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is Armstrong
bool isArmstrong(int num) {
    int original = num;
    int digits = 0;
    
    // Count digits
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate Armstrong sum
    temp = num;
    int sum = 0;
    while (temp > 0) {
        int r = temp % 10;
        sum += pow(r, digits);
        temp /= 10;
    }

    return sum == original;
}

// Function to find Armstrong numbers in range [n, k]
vector<int> findArmstrongInRange(int n, int k) {
    vector<int> armstrongNumbers;

    for (int i = n; i <= k; i++) {
        if (isArmstrong(i)) {
            armstrongNumbers.push_back(i);
        }
    }

    // If no Armstrong number found, return vector with -1
    if (armstrongNumbers.empty()) {
        return {-1};
    }

    return armstrongNumbers;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> result = findArmstrongInRange(n, k);

    // Print result
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
