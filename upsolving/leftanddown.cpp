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
    ll a,b,k;
    cin >> a >> b >> k;
    if(k==1){
        if(a!=b){
            cout<<2<<endl;
            return;
        }
        else{
            cout<<1<<endl;
            return;
        }
    }

    if(max(a,b)<k){
        cout<<1<<endl;
        return;
    }
    
    int flag1=0,flag2=0;

    for(int i=2;i<=k;i++){
        if(a%i == 0){
            flag1=1;
            break;
        }
    }

    for(int i=2;i<=k;i++){
        if(b%i == 0){
            flag2=1;
            break;
        }
    }

    if(flag1 && flag2){
        cout<<1<<endl;
        return;
    }
    else{
        cout<<2<<endl;
        return;
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