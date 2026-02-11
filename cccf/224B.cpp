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
    vector<ll> a(n),ar(n,0);
    ll k=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0){
            ar[k]++;
        }
        else{
            k++;
        }
    }

    cout<<*max_element(ar.begin(),ar.end())<<endl;
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