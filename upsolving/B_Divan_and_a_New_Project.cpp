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
    
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.rbegin(), a.rend());

    vector<int> ans(n + 1); 
    ans[0] = 0; 
    
    ll res = 0; 
    int dist = 1;

    for(int i = 0; i < n; i++) {

        int original_idx = a[i].second + 1; 
        int current_visits = a[i].first;
        ans[original_idx] = dist;
        res += 2LL * abs(dist) * current_visits; 

        if (dist > 0) {
            dist = -dist;
        } else {
            dist = -dist + 1;
        }
    }

    cout << res << "\n";
    for(int i = 0; i <= n; i++) {
        cout << ans[i] << (i == n ? "" : " ");
    }
    cout << "\n";
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