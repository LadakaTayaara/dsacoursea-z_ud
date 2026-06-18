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

bool isValid(ll h, const vector<ll>& a, ll w) {
    ll water_needed = 0;
    for (ll coral : a) {
        if (h > coral) {
            water_needed += (h - coral);
        }
    }
    return water_needed <= w;
}

void solve() {
    int n;
    ll w;
    cin >> n >> w;
    vector<ll> a(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];

    ll low = 1;
    ll high = 2e9 + 7; 
    ll res = 1;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        
        if (isValid(mid, a, w)) {
            // If this height is valid, save it as our best so far
            res = mid;
            // Now try to build an even taller tank
            low = mid + 1;
        } else {
            // If it uses too much water, we must build a shorter tank
            high = mid - 1;
        }
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