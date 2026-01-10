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

int f(vector<vector <int>> &a,vector<vector <int>> &dp,int i,int j,int lim){
    if(i==lim-1){return a[lim-1][j];}
    if(i==lim-1 && j==lim-1){return a[lim-1][lim-1];}
    if(dp[i][j]!=-1){return dp[i][j];}
    int down=a[i][j] + f(a,dp,i+1,j,lim);
    int diag=a[i][j] + f(a,dp,i+1,j+1,lim);
    return dp[i][j]=max(down,diag);
}

void solve() {
    int n;
    cin >> n;
    vector<vector <int>> a(n,vector<int> (n));
    vector<vector <int>> dp(n,vector<int> (n,-1));
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cin>>a[i-1][j];
        }
    }
    int res=f(a,dp,0,0,n);
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