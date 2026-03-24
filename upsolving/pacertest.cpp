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
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>> a(n+1);
    a[0].first=0;
    a[0].second=0;
    for(int i=1;i<n+1;i++){
        cin>>a[i].first>>a[i].second;
    }

    int res=0;

    for(int i=1;i<n+1;i++){
        if(a[i].second==a[i-1].second){
            res+= (a[i].first - a[i-1].first) - (a[i].first - a[i-1].first)%2;
        }
        else{
            res+= (a[i].first - a[i-1].first) - ( 1 -(a[i].first - a[i-1].first)%2);
        }
    }

    res+= m - a[n].first;

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