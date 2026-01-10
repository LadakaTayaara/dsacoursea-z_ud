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

/*int f(vector<int> &a,int i,vector<int> &dp){
    if(i==0){
        return a[i];
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int ons=INT_MAX,tns=INT_MAX,trns=INT_MAX;

    ons=a[i]+f(a,i-1,dp);
    if(i>1){
        tns=a[i]+f(a,i-2,dp);
    }
    if(i>2){
        trns=a[i]+f(a,i-3,dp);
    }
    return dp[i]=min({ons,tns,trns});
}*/

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> dp(n,-1);
    for(int i=0;i<n;i++){
        cin>>a[i];
        dp[i]=a[i];
    }
    for(int i=3;i<n;i++){
        long long ons=INT_MAX,tns=INT_MAX,trns=INT_MAX;
        ons=a[i]+dp[i-1];
        tns=a[i]+dp[i-2];
        trns=a[i]+dp[i-3];
        dp[i]=min({ons,tns,trns});
    }
    cout<<dp[n-1] + 1<<"\n";
}
    

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    solve();
    return 0;
}