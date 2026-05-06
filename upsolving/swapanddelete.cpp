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
    string s;
    cin >> s;
    
    int zeros = 0, ones = 0;
    for (char c : s) {
        if (c == '0') zeros++;
        else ones++;
    }

    int matched = 0;
    for (char c : s) {
        if (c == '0') {
            if (ones > 0) {
                ones--;
                matched++;
            } else {
                break;
            }
        } 
        else {
            if (zeros > 0) {
                zeros--;
                matched++;
            } else {
                break;
            }
        }
    }

    cout << s.length() - matched << endl;
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