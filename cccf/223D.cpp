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
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int res=0;

    for(ll i=0;i<n;i++){
        if(a[i]==1){
            res++;
        }
        for(ll j=i+1;j<n;j++){
            if(a[j]==a[i]){
                break;
            }
            if(a[j]==a[i]+1){
                res++;
                break;
            }
        }
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