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
    vector<int> ai(3);
    for(int i = 0; i < 3; i++) {
        cin >> ai[i];
    }
    sort(ai.begin(), ai.end());
    
    int mini = ai[0];
    int median = ai[1];
    int maxi = ai[2];

    if ((maxi - mini) >= 10) {
        cout << "check again" << endl;
    } else {
        cout << "final " << median << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}