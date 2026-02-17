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

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    } // Custom macro for array input
    map<ll, ll> fr;
    for(int i=0;i<n;i++) // Custom macro for loop: for(int i=0; i<n; i++)
    {
        fr[a[i]]++;
    }

    ll ans = 0;
    // Iterate through potential pairs (i, k-i)
    for (ll i = 0; i <= (k - 1) / 2; i++)
    {
        ans += min(fr[i], fr[k - i]);
    }

    // Special case for the middle element if k is even
    // if (k & 1 ^ 1) is equivalent to if (k % 2 == 0)
    if (k & 1 ^ 1)
    {
        ans += fr[k / 2] / 2;
    }

    cout << ans << endl;
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