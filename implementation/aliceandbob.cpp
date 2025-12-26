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
    int a;
    cin>>a;
    vector<int> v(n);
    int ct=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(a<=v[i]){
            ct++;
        }
    }
    int d=0;
    for(int i=1;i<n;i++){
        d+=abs(v[i-1]-v[i]);
    }
    d/=n-1;
    if((a+d)!=a || (a-d)!=a){
        if(ct>(n/2)){
        cout<<a+d;
        }
        else{
            cout<<a-d;
        }
    }
    else{
        cout<<2*a;
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