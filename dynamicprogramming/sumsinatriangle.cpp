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
    vector<vector <int>> a(n,vector<int> (n));
    vector<vector <int>> dp(n,vector<int> (n,-1));
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cin>>a[i-1][j];
        }
    }
    for(int i=0;i<n;i++){
        dp[n-1][i]=a[n-1][i];
    }
    for(int i=n-2;i>=0;i--){
        for(int j=i;j>=0;j--){
            int down=a[i][j] + dp[i+1][j];
            int diag=a[i][j] + dp[i+1][j+1];
            dp[i][j]=max(down,diag);
        }
    }
    int res=dp[0][0];
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