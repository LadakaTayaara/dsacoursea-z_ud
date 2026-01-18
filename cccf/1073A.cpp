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
    long long n;
    cin >> n;

    vector<pair <long long,long long>> a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i].first;
        if(i%2==0){
            a[i].second=0;
        }
        else{
            a[i].second=1;
        }
    }

    sort(a.begin(),a.end());

    for(long long i=0;i<n-1;i++){
        if(a[i].second==a[i+1].second){
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";
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