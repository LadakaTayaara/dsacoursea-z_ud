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
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    long long res = 0; 
    long long sm = 0;
    long long maxrep = 0;

    int limit = min(n, k);
    
    for(int i = 0; i < limit; i++) {
        sm += a[i];
        maxrep = max(maxrep, (long long)b[i]);
        
        long long temp = k - (i + 1);
        long long total_score = sm + (temp * maxrep);
        
        res = max(res, total_score);
    }

    cout << res << "\n";
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