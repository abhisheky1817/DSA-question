#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    int sum = 0;
    int maximum = INT_MIN;
    int minimum = INT_MAX;

    for (int i = 0; i < n; i++) {
        
        sum += accumulate(mat[i].begin(), mat[i].end(), 0);

        maximum = max(maximum, *max_element(mat[i].begin(), mat[i].end()));
        minimum = min(minimum, *min_element(mat[i].begin(), mat[i].end()));
    }

    cout << sum << endl << maximum << endl << minimum;

}
