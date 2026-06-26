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
    vector<ll> a(n);
    vector<ll> prfx(n,0);

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0){
            prfx[0]=a[0];
        }
        else if(i>0){
            prfx[i]=prfx[i-1] + a[i];
        }
    }

    ll resgcd=1;

    for(int i=0;i<n-1;i++){
        ll current_gcd = gcd(prfx[i], prfx[n-1] - prfx[i]);
        resgcd = max(resgcd, current_gcd);
    }

    cout<<resgcd<<endl;
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