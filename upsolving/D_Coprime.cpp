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
    map<int,int> mp;

    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=i+1;
    }
    
    int res=-1;
    for(int i=1000;i>0;i--){
        for(int j=1000;j>0;j--){
            if((mp[i]>0) && (mp[j]>0) && (gcd(i,j)==1)){
                res=max(res,mp[i]+mp[j]);
            }
        }
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