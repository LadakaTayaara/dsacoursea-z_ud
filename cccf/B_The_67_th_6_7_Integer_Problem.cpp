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
    vector<ll> a(7);
    for(int i=0;i<7;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    ll sum=0;
    for(int i=0;i<7;i++){
        if(i==6){
            sum+=a[i];
        }
        else{
            sum-=a[i];
        }
    }

    cout<<sum<<endl;
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