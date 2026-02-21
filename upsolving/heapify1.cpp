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
    vector<ll> a(n); for(int i=0;i<n;i++){cin>>a[i];}

    for(int i=1;i<=n;i++){
        if(a[i-1]>a[2*i-1] && 2*i - 1 < n){
            swap(a[i-1],a[2*i - 1]);
        }
    }

    int flag=1;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            flag=0;
            break;
        }
    }

    if(flag){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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