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

int f(int i,vector<int> &a,vector<int> &b,vector<int> &dp,int lim,int k){
    if(dp[i]!=-1){
        return dp[i];
    }
    if(i==lim){
        return k;
    }
    if(i>0){
        int red=k-a[i] + f(i+1,a,b,dp,lim,k-a[i]);
        int blue=b[i]-k + f(i+1,a,b,dp,lim,b[i]-k);
        return dp[i]=max(red,blue);
    }
    return 0;
}

void solve() {
    int k=0;
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> dp(n,-1);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int res=f(0,a,b,dp,n-1,k);
    cout<<res<<"\n";
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