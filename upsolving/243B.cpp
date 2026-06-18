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
    int m, n;
    cin >> m >> n;

    vector<int> a(m, 0);

    int min_w = 0;
    if (n > m) {
        min_w = (n - m + 1) / 2;
    }
    int draws = n - (3 * min_w);

    int i = 0;

    while (min_w > 0 && i < m) {
        a[i] = 3;
        min_w--;
        i++;
    }

    while (draws > 0 && i < m) {
        a[i] = 1;
        draws--;
        i++;
    }

    int res = 0;
    for (int j = 0; j < m; j++) {
        if (a[j] == 0) {
            res++;
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