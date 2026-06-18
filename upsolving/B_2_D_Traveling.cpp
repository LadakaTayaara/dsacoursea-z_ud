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
    ll n, k, b, a;
    cin >> n >> k >> a >> b;
    
    a--;
    b--;
    
    vector<pair<ll,ll>> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i].first >> arr[i].second;
    }

    ll res = abs(arr[a].first - arr[b].first) + abs(arr[a].second - arr[b].second);

    ll resa = 1e15; 
    ll resb = 1e15;

    if (k > 0) {
        for(int i = 0; i < k; i++){
            resa = min(resa, abs(arr[a].first - arr[i].first) + abs(arr[a].second - arr[i].second));
            resb = min(resb, abs(arr[i].first - arr[b].first) + abs(arr[i].second - arr[b].second));
        }
        res = min(res, resa + resb);
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