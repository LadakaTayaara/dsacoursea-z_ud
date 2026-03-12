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
    ll n,k;
    cin >> n >> k;
    vector<int> a(n);
    int vl=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    string s;
    cin>>s;

    for(ll i=0;i<n;i++){
        if(s[i]=='0'){
            vl++;
        }
        else{
            a[i]=-1;
        }
    }

    if(vl<k){
        cout<<-1<<endl;
        return;
    }
    else{
        sort(a.begin(),a.end());
        int i=0;
        int res=0;
        while(k>=0){
            if(a[i]>0 && i<n){
                res+=a[i];
                k--;
            }
            i++;
        }

        cout<<res<<endl;
        return;
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