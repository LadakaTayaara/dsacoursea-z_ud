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
    vector<long long> c(3), a(5);
    for(int i=0; i<3; i++) cin >> c[i];
    for(int i=0; i<5; i++) cin >> a[i];


    if (a[0] > c[0] || a[1] > c[1] || a[2] > c[2]) {
        cout << "NO" << endl;
        return;
    }

    
    long long left_in_c0 = c[0] - a[0];
    long long remaining_a3 = max(0LL, a[3] - left_in_c0);

    
    long long left_in_c1 = c[1] - a[1];
    long long remaining_a4 = max(0LL, a[4] - left_in_c1);

    
    if (remaining_a3 + remaining_a4 <= (c[2] - a[2])) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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