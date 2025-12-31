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
    int n,m;
    cin >> n >> m;
    if(n>=m){
        cout<<0<<endl;
        return;
    }
    m-=n;
    if(m>=n){
        cout<<n<<endl;
    }
    else if(m<n){
        cout<<m<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}