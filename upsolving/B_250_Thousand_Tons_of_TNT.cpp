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
    int n;
    cin >> n;
    vector<ll> a(n);

    for(int i=0;i<n;i++)cin>>a[i];

    ll res=INT_MIN;

    for(int i=1;i<=n;i++){
        if(n%i == 0){
            vector<ll> sums;
            int j=0;
            while(j<n){
                ll sm=0;
                int temp=i;
                while(temp-- && j<n){
                    sm+=a[j];
                    j++;
                }
                sums.push_back(sm);
            }
            res=max(res,*max_element(sums.begin(),sums.end()) - *min_element(sums.begin(),sums.end()));
        }
    }

    cout<<res<<endl;
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