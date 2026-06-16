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
    ll n,q;
    cin >> n >> q;
    
    vector<ll> a(n),x(q);

    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<q;i++)cin>>x[i];

    ll minpwr=INT_MAX;

    for(int i=0;i<q;i++){
        if(x[i]<minpwr){
            int fct=pow(2,x[i]);
            for(int j=0;j<n;j++){
                if(a[j]%fct == 0){
                    a[j]+= (fct/2);
                }
            }
            minpwr=min(x[i],minpwr);
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
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