#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
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
    ll n;
    cin >> n;
    set<ll> s;
    for(int i=0;i<n;i++){
        ll t;
        cin>>t;
        s.insert(t);
    }
    cout<< *s.lower_bound(s.size())<<endl;
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