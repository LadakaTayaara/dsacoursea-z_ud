#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
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
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int max_val = -1;
    int removals = 0;
    
    for(int i = 0; i < n; i++) {
        if (max_val > a[i]) {
            removals++;
        }
        max_val = max(max_val, a[i]);
    }
    
    cout << removals << endl;
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