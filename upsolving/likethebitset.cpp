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
    int n,k;
    cin >> n >> k;
    string s;
    cin>>s;
    vector<int> a(n,0);
    
    int consecutive_ones = 0;
    int max_ones = 0;
    for (char c : s) {
        if (c == '1') {
            consecutive_ones++;
        } else {
            consecutive_ones = 0;
        }
        max_ones = max(max_ones, consecutive_ones);
    }

    if (max_ones >= k) {
        cout << "NO\n";
        return;
    }

    int r1=1;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            a[i]=r1;
            r1++;
        }
    }

    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            a[i]=r1;
            r1++;
        }
    }

    cout<<"YES\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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