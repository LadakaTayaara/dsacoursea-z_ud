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
    vector<ll> a(n),b(n);
    ll res=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        res+=a[i];
    }

    for(ll i=0;i<n;i++){
        cin>>b[i];
    }

    if(n==1){
        cout<<b[0]<<endl;
        return;
    }
    
    int mini=0;
    for(ll i=1;i<n;i++){
        if((a[mini]-b[mini])>(a[i]-b[i])){
            mini=i;
        }
    }

    res-=a[mini];
    res+=b[mini];

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