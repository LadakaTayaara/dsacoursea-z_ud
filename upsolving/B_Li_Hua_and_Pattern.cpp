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
    int n,k;
    cin >> n >> k;
    vector<vector<int>> a(n,vector<int>(n)),b(n,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            b[n-i-1][n-j-1]=a[i][j];
        }
    }

    ll diff=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=b[i][j]){
                diff++;
            }
        }
    }

    int min_ops_needed = diff / 2;

    if(k < min_ops_needed){
        cout << "NO\n";
        return;
    }
    int leftovers = k - min_ops_needed;

    if(n % 2 == 1){
        cout << "YES\n";
    } 
    else if(leftovers % 2 == 0){
        cout << "YES\n";
    } 
    else {
        cout << "NO\n";
    }
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