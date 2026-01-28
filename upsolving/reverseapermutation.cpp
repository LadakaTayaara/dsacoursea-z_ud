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
    vector<ll> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    
    ll ii=0;
    for(int i=0;i<n;i++){
        if(p[i]!=n-i){
            ii=i;
            break;
        }
    }

    ll maxi=ii;
    for(int i=ii;i<n;i++){
        if(p[i]>p[maxi]){
            maxi=i;
        }
    }

    while(maxi>=ii){
        int temp=p[ii];
        p[ii]=p[maxi];
        p[maxi]=temp;
        ii++;
        maxi--;
    }

    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
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