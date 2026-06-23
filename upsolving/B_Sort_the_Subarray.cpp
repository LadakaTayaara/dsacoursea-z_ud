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
    vector<ll> _a(n),a(n);
    
    for(int i=0;i<n;i++)cin>>_a[i];
    for(int i=0;i<n;i++)cin>>a[i];

    int ldiff=0;
    int rdiff=n-1;

    while(ldiff<n){
        if(_a[ldiff]!=a[ldiff]){
            break;
        }
        ldiff++;
    }

    while(rdiff>=0){
        if(_a[rdiff]!=a[rdiff]){
            break;
        }
        rdiff--;
    }

    while (ldiff > 0 && a[ldiff] >= a[ldiff - 1]) {
        ldiff--;
    }

    while (rdiff < n - 1 && a[rdiff] <= a[rdiff + 1]) {
        rdiff++;
    }

    cout<<ldiff+1<<" "<<rdiff+1<<endl;
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