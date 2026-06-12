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
    int a, b;
    cin >> a >> b;

    int min_total_moves = 1e9;
    for (int i = 0; i <= 30; i++) {
        int current_b = b + i;
        
        if (current_b == 1) continue;

        int current_a = a;
        int current_moves = i;

        while (current_a > 0) {
            current_a /= current_b;
            current_moves++;
        }
        min_total_moves = min(min_total_moves, current_moves);
        if (i > min_total_moves) {
            break;
        }
    }

    cout << min_total_moves << "\n";
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