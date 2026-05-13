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
    string s;
    cin >> s;

    int current_w = 0;
    for (int i = 0; i < k; i++) {
        if (s[i] == 'W') {
            current_w++;
        }
    }

    int res = current_w;
    for (int i = k; i < n; i++) {
        if (s[i] == 'W') current_w++;
        if (s[i - k] == 'W') current_w--;
        res = min(res, current_w);
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