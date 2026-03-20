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
    int n,h,l;
    cin>>n>>h>>l;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<vector<int>> p(h,vector<int>(l,0));
    
    int res_h=0;
    int res_l=0;
    for(int i=0;i<n;i++){
        if(a[i]<=h){
            res_h++;
        }
        if(a[i]<=l){
            res_l++;
        }
    }

    cout<<min(max(res_h,res_l)/2,min(res_h,res_l))<<endl;
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