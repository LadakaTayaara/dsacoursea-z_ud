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
    int b,g,x,y,n;
    cin >> b >> g >> x >> y >> n;
    int res=ceil((b+g)/n);
    if(res*x<=b && res*y<=g){
        cout<<res<<endl;
        return;
    }
    cout<<-1<<endl;
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