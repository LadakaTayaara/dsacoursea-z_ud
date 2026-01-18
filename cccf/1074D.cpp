//time limit exceeded
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
    ll n, m, h;
    cin >> n >> m >> h;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    vector<pair<ll, ll>> pr(m);
    for (ll i = 0; i < m; i++) {
        int b, c;
        cin >> b >> c;
        pr[i].first = b;
        pr[i].second = c;
    }

    vector<ll> cp = a;
    for (ll i = 0; i < m; i++) {
        ll idx = pr[i].first-1;
        ll val = pr[i].second;
        if (idx < 0 || idx >= n) continue;
        if (cp[idx] + val > h) {
            cp = a;
        } else {
            cp[idx] += val;
        }
    }

    for (ll i = 0; i < n; i++) {
        cout << cp[i];
        if (i + 1 < n) cout << " ";
    }
    cout << "\n";
    return;
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