#include <bits/stdc++.h>
#include <string>
#include <algorithm>
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
    long long r, x, d, n;
    cin >> r >> x >> d >> n;
    string s;
    cin >> s;
    int res = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == '1' || (s[i] == '2' && r < x)) {
            res++;
            r = max(0LL, r - d); 
        }
    }
    cout << res << endl;
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