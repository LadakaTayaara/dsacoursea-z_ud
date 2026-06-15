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
    ll n;
    cin >> n;
    vector<int> hsh(37);
    string s;
    cin>>s;

    ll res=n;
    hsh[s[0]%97]++;

    for(int i=1;i<n;i++){
        if(hsh[s[i]%97]==0){
            res+=n-i;
            hsh[s[i]%97]++;
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