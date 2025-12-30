//upsolve this code later for greedy concepts

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
    long long a,b;
    cin>>a>>b;
    if(a>b){
        swap(a,b);
    }
    int x=0, y=1;
    int ans=0;
    while( x<=a && y<=b){
        x*=2;
        y*=2;
        if(ans%2 ==0){
            x++;
        }
        else{
            y++;
        }
        ans++;
    }
    cout<<ans<<endl;
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