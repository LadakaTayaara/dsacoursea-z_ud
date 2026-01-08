#include <bits/stdc++.h>
using namespace std;

int f(int i, int j, vector<vector<int>> &a, vector<vector<int>> &dp) {
    // 1. Check bounds FIRST
    if (i < 0 || j < 0) {
        return 1e9; // Using a large number instead of INT_MAX to prevent overflow
    }
    
    // 2. Base case
    if (i == 0 && j == 0) {
        return a[0][0];
    }
    
    // 3. Memoization check
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    
    // 4. Recursive calls
    int up = a[i][j] + f(i - 1, j, a, dp);
    int left = a[i][j] + f(i, j - 1, a, dp); // Corrected to j-1
    
    return dp[i][j] = min(up, left);
}

void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;
    
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> dp(n, vector<int>(m, -1));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    // Start from the last valid index: (n-1, m-1)
    int res = f(n - 1, m - 1, a, dp);
    cout << res << endl;
}