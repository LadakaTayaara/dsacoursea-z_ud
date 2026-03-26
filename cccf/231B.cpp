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
    int n;
    cin >> n;
    

    int r_n=n;
    int l_n=n;
    int l_d=0;
    int r_d=0;

    while((r_n%2!=0 && r_n%5!=0) || r_n%10==0){
        r_n++;
        r_d++;
    }

    while((l_n%2!=0 && l_n%5!=0) || l_n%10==0){
        l_n--;
        l_d++;
    }

    cout<<min(l_d,r_d)<<endl;
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