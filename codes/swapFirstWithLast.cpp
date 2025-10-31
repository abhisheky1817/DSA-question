#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> mat(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    // Fix here
    for (int i = 0 ; i < n/2; i++) {   // only go till half rows
        for (int j = 0; j < k; j++) {  // swap last k of top row with first k of bottom row
            int temp = mat[i][m-k+j];
            mat[i][m-k+j] = mat[n-1-i][j];
            mat[n-1-i][j] = temp;
        }
    }

    // Output
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
