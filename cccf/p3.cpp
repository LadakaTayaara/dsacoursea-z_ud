#include <bits/stdc++.h>
#include <vector>
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
    for(int i=0;i<n+1;i++){
        cin>>a[i];
    }
    vector<int> ma(n,-1);
    for(int i=0;i<n;i++){
        ma[i]=max(a[i],a[i+1]);
    }

    cout<<*min_element(ma.begin(),ma.end())<<"\n";
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