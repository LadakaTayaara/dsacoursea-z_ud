#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        int rem = temp % k;
        if (rem == 0) rem = k;
        
        a[i].first = rem;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end(), [](const pair<int, int>& x, const pair<int, int>& y) {
        if (x.first != y.first) {
            return x.first > y.first; 
        }
        return x.second < y.second;
    });

    for (int i = 0; i < n; i++) {
        cout << a[i].second << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}