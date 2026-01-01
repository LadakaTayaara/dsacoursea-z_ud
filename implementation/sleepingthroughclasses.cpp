#include <bits/stdc++.h>
#include <string>
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
    int n,k;
    cin >> n >> k;
    string s(n,'*');
    cin>>s;

    int ans=0;
    int mini_i=0;
    for(int i=0;i<n;i++){
        if(s[i] == '0' && i>=mini_i) ans++;
        else if(s[i]=='1'){
            mini_i= i + k +1;
        }
    }
    cout<< ans <<endl;
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