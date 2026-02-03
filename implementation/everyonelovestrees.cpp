#include <bits/stdc++.h>
using namespace std;
//doing this later

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
    if(n==1 || n==3){
        cout<<-1<<endl;
        return;
    }
    else if(n==2){
        cout<<66<<endl;
        return;
    }
    else{
        for(ll i=pow(10,n);i<pow(10,n+1);i++){
            if(i%66==0 && i%33==0){
                cout<<i<<endl;
                return;
            }
        }
        cout<<-1<<endl;
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