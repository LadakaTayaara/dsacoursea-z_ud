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
    vector<int> a(n);
    vector<int> hsh(101);
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
        hsh[a[i]]++;
    }
    int res=0;
    for(auto it = s.begin(); it != s.end(); ++it){
        if(hsh[*it]>*it){
            res+=hsh[*it]-*it;
        }
        else if(hsh[*it]<*it){
            res+=hsh[*it];
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