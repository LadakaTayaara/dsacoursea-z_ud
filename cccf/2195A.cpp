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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i1=0;
    int i2=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            i1=1;
        }
        if(a[i]==67){
            i2=1;
        }
    }

    if((i1==1 && i2==1)||(i2==1)){
        cout<<"YES\n";
        return;
    }
    else{
        cout<<"NO\n";
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