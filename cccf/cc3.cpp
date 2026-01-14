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
    string s;
    cin>>s;
    vector<int> a(30);
    for(int i=0;i<n;i++){
        a[s[i]-97]++;
    }

    for(int i=0;i<30;i++){
        if(a[i]>2){
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