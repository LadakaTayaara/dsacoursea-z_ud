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
    string s;
    cin>>s;
    vector<int> hsh(124);
    for(int i=0;i<n;i++){
        hsh[s[i]]++;
    }
    for(int i=97;i<124;i++){
        if(hsh[i]>1){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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