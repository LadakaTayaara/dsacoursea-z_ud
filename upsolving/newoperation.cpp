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
    vector<int> av(n);
    int pw=1;
    int mn=0 ; int mx=0;
    for(int i=0;i<n;i++){
        cin>>av[i];
        mn+= i==0 ? av[i] : 2*av[i];
        mx+= i==0 ? av[i] : pw*av[i];
        pw*=2;
    }
    cout<<mn<<" "<<mx<<endl;
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