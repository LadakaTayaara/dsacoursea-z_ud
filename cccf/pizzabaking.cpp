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
    long long a, b;
    cin >> a >> b;

    long long val1 = 100 * b;
    long long val2 = 225 * a;

    if (val1 > val2) {
        cout << "Small" << endl;
    } 
    else if (val1 < val2) {
        cout << "Large" << endl;
    } 
    else if(val1==val2){
        cout << "Equal" << endl;
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