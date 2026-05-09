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
    long long n;
    cin >> n;

    long long ans_a = 1;
    long long ans_b = n - 1;

    for (long long fac = 2; fac * fac <= n; fac++)
    {
        if (n % fac == 0)
        {
            ans_a = n / fac;
            ans_b = n - ans_a;
            break;
        }
    }

    cout << ans_a << " " << ans_b << endl;
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