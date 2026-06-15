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
    
    vector<pair<ll, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    
    sort(a.begin(), a.end());

    vector<ll> pref(n);
    pref[0] = a[0].first;
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + a[i].first;
    }

    vector<int> ans(n);

    ans[n - 1] = n - 1; 

    for (int i = n - 2; i >= 0; i--) {

        if (pref[i] >= a[i + 1].first) {
            ans[i] = ans[i + 1];
        } else {
            ans[i] = i; 
        }
    }

    vector<int> res(n);
    for (int i = 0; i < n; i++) {
        res[a[i].second] = ans[i];
    }


    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout << "\n";
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