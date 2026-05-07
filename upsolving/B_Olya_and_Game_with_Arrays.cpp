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

    ll res=0;
    int globmin=INT_MAX;
    int secmin=INT_MAX;

    for(int i=0;i<n;i++){
        int nv;
        cin>>nv;
        vector<int> ata(nv);
        for(int j=0;j<nv;j++)cin>>ata[j];

        sort(ata.rbegin(),ata.rend());
        res+=ata[nv-2];
        globmin=min(globmin,ata[nv-1]);
        secmin=min(secmin,ata[nv-2]);
    }

    res-=secmin;
    res+=globmin;

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