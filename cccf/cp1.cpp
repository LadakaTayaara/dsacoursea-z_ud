#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int zrc = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 0) zrc++;
    }
    if (zrc % 2 == 0) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
    }
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