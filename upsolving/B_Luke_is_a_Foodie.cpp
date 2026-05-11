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
    ll x;
    cin >> n >> x;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cnt = 0;
    ll mn = a[0];
    ll mx = a[0];

    for(int i = 1; i < n; i++) {
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);

        if (mx - mn > 2 * x) {
            cnt++;
            mn = a[i];
            mx = a[i];
        }
    }

    cout << cnt << "\n";
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