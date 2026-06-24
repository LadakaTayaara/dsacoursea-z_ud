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
    string s;
    cin >> s;
    int n = s.size();

    ll ocnt = 0;
    for (char c : s) {
        if (c == '1') {
            ocnt++;
        }
    }
    if (ocnt == 0) {
        cout << 0 << "\n";
        return;
    }
    
    if (ocnt == n) {
        cout << (ll)n * n << "\n";
        return;
    }

    s += s;
    
    ll max_ones = 0;
    ll current_ones = 0;

    for (char c : s) {
        if (c == '1') {
            current_ones++;
            max_ones = max(max_ones, current_ones);
        } else {
            current_ones = 0;
        }
    }

    ll h = (max_ones + 1) / 2;
    ll w = (max_ones + 1) - h;

    cout << h * w << "\n";
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