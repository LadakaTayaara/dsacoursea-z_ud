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
    ll n, c;
    cin >> n >> c;
    
    vector<ll> costs(n);
    for(int i = 0; i < n; i++) {
        ll a;
        cin >> a;
        costs[i] = a + (i + 1);
    }

    sort(all(costs));

    ll res = 0;
    for(int i = 0; i < n; i++) {
        if(c >= costs[i]) {
            c -= costs[i];
            res++;
        } else {
            break;
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