#include <bits/stdc++.h>
using namespace std;

using ll = long long;

constexpr ll mod = 1e9+7;

void solve(){
    ll n; cin >> n;
    string s; cin >> s;
    vector<ll> idx0, idx1;
    for (ll i = 0; i < n; i++){
        if (s[i] == '1') idx1.push_back(i+1);
        else idx0.push_back(i+1);
    }

    if (idx0.size() & 1){
        cout << idx0.size() << '\n';
        for (ll i : idx0) cout << i << " "; 
        cout << '\n';
    } else if (!(idx1.size() & 1)){
        cout << idx1.size() << '\n';
        for (ll i : idx1) cout << i << " ";
        if (idx1.size()) cout << '\n';
    } else {
        cout << -1 << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    ll t; cin >> t;
    while (t--) solve();
}