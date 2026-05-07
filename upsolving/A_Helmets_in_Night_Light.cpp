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
    ll n, p; // Use long long for costs
    cin >> n >> p;
    
    vector<pair<ll, ll>> residents(n);
    vector<ll> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i = 0; i < n; i++) {
        residents[i] = {b[i], a[i]};
    }

    sort(residents.begin(), residents.end());

    ll total_cost = p;
    ll informed = 1;
    
    for (int i = 0; i < n && informed < n; i++) {
        if (residents[i].first < p) {
            ll needed = n - informed;
            ll can_tell = min(needed, residents[i].second);
            
            total_cost += can_tell * residents[i].first;
            informed += can_tell;
        } else {
            break;
        }
    }

    if (informed < n) {
        total_cost += (n - informed) * p;
    }

    cout << total_cost << "\n";
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