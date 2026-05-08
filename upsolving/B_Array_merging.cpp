#include <bits/stdc++.h>
using namespace std;

// Type aliases
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<ll>;

// Macros
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    // Maps to store the longest streak found so far for each number
    map<int, int> maxA, maxB;

    // Process Array A
    int i = 0;
    while(i < n) {
        int j = i;
        while(j < n && a[j] == a[i]) j++;
        int streak = j - i;
        maxA[a[i]] = max(maxA[a[i]], streak);
        i = j;
    }

    // Process Array B
    i = 0;
    while(i < n) {
        int j = i;
        while(j < n && b[j] == b[i]) j++;
        int streak = j - i;
        maxB[b[i]] = max(maxB[b[i]], streak);
        i = j;
    }

    // Find the maximum sum of streaks for any number
    int ans = 0;
    
    // Check all numbers that appeared in A
    for(auto const& [val, streak] : maxA) {
        ans = max(ans, streak + maxB[val]);
    }
    // Check all numbers that appeared in B (in case they weren't in A)
    for(auto const& [val, streak] : maxB) {
        ans = max(ans, streak + maxA[val]);
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}