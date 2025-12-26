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
    int n, a;
    cin >> n >> a;
    vector<int> v(n);
    
    int count_less = 0;
    int count_greater = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] < a) count_less++;
        else if (v[i] > a) count_greater++;
    }

    if (count_less >= count_greater) {
        cout << a - 1 << "\n";
    } else {
        cout << a + 1 << "\n";
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