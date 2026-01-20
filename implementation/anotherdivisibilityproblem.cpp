#include <bits/stdc++.h>
#include <string>
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

int countplace(int n){
    return floor(log10(abs(n))) + 1;
}

void solve() {
    ll x;
    cin >> x;
    for(long long i=1;i<pow(10,7);i++){
        ll smp= x*pow(10,countplace(i))+i;
        if(smp%(x+i)==0){
            cout<<i<<"\n";
            return;
        }
    }
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