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
    ll b,g,x,y,n;
    cin>>b>>g>>x>>y>>n;
    if((x+y)>n){
        cout<<-1<<endl;
        return;
    }
    ll len=max({b,g,x,y,n});
    vector<ll> a(len,0);
    ll i=0;

    while(b>0 || g>0){
        if(b>0){
            a[i]++;
            b--;
        }
        if(g>0){
            a[i]++;
            g--;
        }
        i++;
    }

    for(int i=0;i<len;i++){
        ll k=0;
        while(a[i]<=0){
            
        }
    }

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