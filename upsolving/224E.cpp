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
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i=0;i<n;i++){
        cin>>a[i];
    }

    ll i=0;
    int res=0;

    while(i<n-1){
        ll j=i+1;
        while(j<n){
            if(abs(a[j]-a[i])-k > 0){
                res++;
                i=j;
            }
            else{
                j++;
            }
        }
        if(i!=j) i++;
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