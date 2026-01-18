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

int MEX(const vector<ll> &hsh) {
    int mex = 0;
    while (mex < (int)hsh.size() && hsh[mex] > 0) {
        ++mex;
    }
    return mex;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll maxval = a.back() + a[0];
    vector<ll> hsh(maxval + 2, 0);
    for (int i = 0; i < n; i++) {
        hsh[a[i]]++;
    }
    cout << MEX(hsh) << endl;
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