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
    vector<ll> a(n),b(n);

    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];

    ll modul= 1e9 +7;

    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    ll res=1;

    for(int i=0;i<n;i++){
        ll border=upper_bound(a.begin(),a.end(),b[i])-a.begin();
        ll cnt= n-border;

        res=res*max(cnt-i,0ll)%modul;
    }

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