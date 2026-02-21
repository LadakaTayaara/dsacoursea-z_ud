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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int> counts;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        counts[a[i]]++;
    }

    int first_val = a[0];
    int initial_distinct = counts.size();
    
    vector<int> freqs;
    for (map<int, int>::iterator it = counts.begin(); it != counts.end(); ++it) {
        if (it->first == first_val) continue;
        freqs.push_back(it->second);
    }

    sort(freqs.begin(), freqs.end());

    int eliminated = 0;
    for (int i = 0; i < freqs.size(); i++) {
        if (k >= freqs[i]) {
            k -= freqs[i];
            eliminated++;
        } else {
            break;
        }
    }

    cout << initial_distinct - eliminated << "\n";
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