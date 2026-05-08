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
    int n,k,q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    ll total_ways = 0;
    int i = 0;
    
    while(i < n) {
        if(a[i] <= q) {
            ll streak_len = 0;
            while(i < n && a[i] <= q) {
                streak_len++;
                i++;
            }
            
            if(streak_len >= k) {
                ll m = streak_len - k + 1;
                total_ways += (m * (m + 1)) / 2;
            }
        } else {
            i++;
        }
    }
    
    cout << total_ways << endl;
    
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