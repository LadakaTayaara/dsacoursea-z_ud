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
    vector<int> a(n);
    vector<int> b(n);

    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];

    map<int,int> maxa,maxb;

    int i=0;
    while(i<n){
        int j=i;
        while(j<n && a[j]==a[i])j++;
        int streak=j-i;
        maxa[a[i]]=max(maxa[a[i]],streak);
        i=j;
    }

    i=0;
    while(i<n){
        int j=i;
        while(j<n && b[j]==b[i])j++;
        int streak=j-i;
        maxb[b[i]]=max(maxb[b[i]],streak);
        i=j;
    }

    int res=INT_MIN;

    for(auto const& [val , stk] : maxa){
        res=max(res,stk + maxb[val]);
    }

    for(auto const& [val , stk] : maxb){
        res=max(res,stk + maxa[val]);
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