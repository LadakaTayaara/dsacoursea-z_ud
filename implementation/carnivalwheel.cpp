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
    int l,a,b;
    cin >> l>> a>> b;
    vector<int> ar(l);
    for(int i=0;i<l;i++){
        ar[i]=i;
    }
    int mx=INT32_MIN;
    for(int i=0;i<l;i++){
        a=(a+b)%l;
        mx=max(mx,a);
    }

    cout<<mx<<"\n";
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