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
    ll w,h;
    cin >> w >> h;

    ll maxarea=INT_MIN;

    for(int i=0;i<4;i++){
        ll k;
        cin>>k;

        int fst,lst;
        vector<int> a(k);
        for(int j=0;j<k;j++){
            cin>>a[j];
            if(j==0)fst=a[j];
            if(j==k-1)lst=a[j];
        }

        ll base=lst-fst;
        ll height;
        if(i<=1){
            height=h;
        }
        else{
            height=w;
        }
        maxarea=max( maxarea, base*height);
    }
    cout<<maxarea<<endl;
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