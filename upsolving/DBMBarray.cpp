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
    ll n,s,x;
    cin >> n >> s >> x;
    vector<ll> a(n);
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

    if((sum==s)||(s>sum && (s-sum)%x==0)){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
    return;
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