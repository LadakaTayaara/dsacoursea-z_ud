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
    long long n, d;
	cin >> n >> d;

	vector<long long> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];


	sort(a.begin(), a.end());

	
	long long left = -1; 
	long long right = n - 1; 
	long long team_size = 1; 
	long long teams = 0;


	while (left < right)
	{

		if ((a[right] * team_size) <= d && left < right)
		{
			left++;
			team_size++;
		}
		else
		{
			teams++;
			right--;
			team_size = 1;
		}
	}
	cout << teams << endl;
	return ;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}