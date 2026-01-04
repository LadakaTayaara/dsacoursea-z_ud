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
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> hsh(n+1);
    int frq=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        hsh[a[i]]++;
        if(a[i]==k){
            frq++;
        }
    }
    int rmv=0;
    for(int i=0;i<k;i++){
        if(hsh[i]==0){
            rmv++;
        }
    }

    cout<<max(rmv,frq)<<endl;
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