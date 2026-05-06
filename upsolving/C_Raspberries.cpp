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
    vector<int> v(n);
    int ans = INT_MAX;
    int count = 0;

    for (auto &i : v) {
        cin >> i;
        if (i % k == 0) {
            ans = 0;
        } else {
            ans = min(k - i % k, ans);
        }
        
        if (i % 2 == 0) {
            count++;
        }
    }

    if (k == 4) {
        ans = min(ans, (2 - min(2, count)));
    }

    cout << ans << "\n";
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