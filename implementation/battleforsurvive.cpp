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
    ll n;
    cin >> n;
    vector<ll> ar(n);
    for(ll i=0;i<n;i++){
        cin>>ar[i];
    }
    ll res=ar[n-1];
    ll dg=0;
    for(ll i=0;i<n-2;i++){
        dg+=ar[i];
    }
    ar[n-2]-=dg;
    res-=ar[n-2];
    cout<<res<<endl;
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