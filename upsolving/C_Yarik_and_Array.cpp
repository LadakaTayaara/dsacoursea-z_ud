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
    vector<ll> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll res = a[0];
    ll current_sum = a[0];

    for(int i = 1; i < n; i++) {
        if (abs(a[i]) % 2 != abs(a[i-1]) % 2) {
            current_sum = max(a[i], current_sum + a[i]);
        } else {
            current_sum = a[i];
        }
        res = max(res, current_sum);
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