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
    vector<ll> prfx(n,0);
    vector<ll> sufx(n,0);
    prfx[0]=1;
    sufx[n-1]=1;
    string s;
    cin>>s;

    for(ll i=1;i<n;i++){
        ll j=i-1;
        while(j>=0){
            if(s[j]==s[i]){
                prfx[i]=prfx[i-1];
                break;
            }
            j--;
        }
        if(prfx[i]==0){
            prfx[i]=prfx[i-1] + 1;
        }
    }

    for(ll i=n-2;i>=0;i--){
        ll j=i+1;
        while(j<n){
            if(s[j]==s[i]){
                sufx[i]=sufx[i+1];
                break;
            }
            j++;
        }
        if(sufx[i]==0){
            sufx[i]=sufx[i+1] + 1;
        }
    }

    int res=INT_MIN;
    for(int i=0;i<n-1;i++){
        res=max((int)res,(int)(prfx[i]+sufx[i+1]));
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