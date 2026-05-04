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
    vector<ll> a(3*n);
    for(int i=0;i<3*n;i++){
        a[i]=i+1;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<a[3*n - 2*i -1]<<" "<<a[3*n - 2*i -2]<<" ";
    }

    cout<<endl;
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