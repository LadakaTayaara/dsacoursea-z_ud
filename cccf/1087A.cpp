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
    ll n,c,k;
    cin >> n >> c >> k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)cin>>a[i];

    sort(a.begin(),a.end());
    for(ll i=0;i<n;i++){
        if(a[i] <= c){
        ll need = c - a[i];
        ll use = min(need, k);
        a[i] += use;
        k -= use;
        c += a[i];
    }
    }

    cout<<c<<endl;
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