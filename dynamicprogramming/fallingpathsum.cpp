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

int f(int i,int j,vector<vector <int>> &a,vector<vector <int>> &dp,int n){
    if(i==0){return a[i][j];}
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(j<0 || j>=n){
        return INT_MAX;
    }
    int uno=a[i][j]+ f(i-1,j-1,a,dp,n);
    int dos=a[i][j]+ f(i,j-1,a,dp,n);
    int tres=a[i][j]+ f(i+1,j-1,a,dp,n);
    return dp[i][j]=min({uno,dos,tres});
}

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    vector<vector<int>> dp(n, vector<int>(n, -1));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    solve();
    return 0;
}