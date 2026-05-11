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
    ll n,k,b,s;
    cin >> n >> k >> b >> s;
    vector<ll> a(n,0);

    if(s==0){
        if(b==0){
            for(int i=0;i<n;i++){
                cout<<0<<" ";
            }
            cout<<endl;
            return;
        }
        cout<<-1<<endl;;
        return;
    }

    if((s< k*b) || s > (k*b) + (k-1)*n){
        cout<<-1<<endl;
        return;
    }

    a[n-1]= k*b;
    s-= k*b;
    for(int i=n-1;i>=0;i--){
        if(s>0){
            a[i]+=min(s,k-1);
            s-=min(s,k-1);
        }
    }

    for(int i=0;i<n;i++)cout<<a[i]<<" ";

    cout<<endl;
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