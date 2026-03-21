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
    vector<int> a(n+1);
    a[0]=0;
 
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int j=0;j<n/2;j++){
        for(int i=1;i<=n;i++){
            if( a[i]>a[2*i] && 2*i < n){
                swap(a[i],a[2*i]);
            }
    }
    }
 
    for(int i=1;i<n;i++){
        if(a[i]>a[i+1]){
            cout<<"NO\n";
            return;
        }
    }
 
    cout<<"YES\n";
    return;
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