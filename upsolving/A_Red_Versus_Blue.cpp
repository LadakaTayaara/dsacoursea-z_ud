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
    
		int n, r, b;
		cin >> n >> r >> b;
		string s;

		int length_of_red = r / (b + 1);

		int extra_red = r % (b + 1);

		for (int times = 1; times <= b + 1; times++)
		{

			for (int i = 0; i < length_of_red; i++)
				s += 'R';

			if (extra_red > 0)
			{
				s += 'R';
				extra_red--;
			}

			if (times != b + 1)
				s += 'B';
		}

		cout << s << endl;
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