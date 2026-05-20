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

long long xor_till(long long n)
{
	long long a = n % 4;
	if (a == 0)
		return n;
	else if (a == 1)
		return 1;
	else if (a == 2)
		return n + 1;
	else
		return 0;
}


void solve() {
    long long a, b;
    cin >> a >> b;

    long long arr_xor = xor_till(a - 1);
    if (arr_xor == b)
        cout << a << endl;
    else if ((arr_xor ^ b) != a)
        cout << a + 1 << endl;
    else
        cout << a + 2 << endl;
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