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
    vector<pair<int,int>> a(n);
    int maxsec=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
        if(a[i].second>maxsec){
            maxsec=a[i].second;
        }
    }

    int y = maxsec + 1;
    for(int i=0;i<n;i++){
        if(y < a[i].first){
            y=a[i].first;
        }
        else if(y>a[i].second){
            y=a[i].second;
        }
    }

    cout<<y<<endl;
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