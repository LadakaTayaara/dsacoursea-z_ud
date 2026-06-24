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
    int n,l,r;
    cin >> n >> l >> r;
    l--;
    r--;
    vector<int> a(n);

    for(int i=0;i<n;i++)cin>>a[i];

    int res=0;
    int sm=0;
    for(int i=0;i<n;i++){
        if((i>=l)&&(i<=r)){
            sm=0;
            continue;
        }
        sm+=a[i];
        res=max(res,sm);
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