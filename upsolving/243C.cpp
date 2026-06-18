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
    cin >> n>>k;
    
    vector<ll> a(n);
    ll sum=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

    int res=0;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((sum+a[i]+a[j])/2 > k){
                res++;
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