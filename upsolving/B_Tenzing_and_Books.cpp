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
    int n,x;
    cin >> n >> x;
    vector<int> a(n),b(n),c(n);

    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++)cin>>c[i];

    ll w=0;
    for(int i=0;i<n;i++){
        if((a[i] | x) != x){
            break;
        }
        w|=a[i];
    }

    for(int i=0;i<n;i++){
        if((b[i] | x) != x){
            break;
        }
        w|=b[i];
    }

    for(int i=0;i<n;i++){
        if((c[i] | x) != x){
            break;
        }
        w|=c[i];
    }
    
    if(w!=x){
        cout<<"No\n";
        return;
    }
    else{
        cout<<"Yes\n";
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