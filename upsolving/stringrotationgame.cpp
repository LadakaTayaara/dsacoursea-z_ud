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

void rotation(string &s,int n){
    char temp=s[n-1];
    for(int i = n-1; i > 0; i--){
        s[i] = s[i-1];
    }
    s[0]=temp;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;

    int res=INT_MIN;
    for(int i=0;i<=n;i++){
        rotation(s,n);
        int cnt = 1;
        for(int i = 1; i < n; i++){
            if(s[i] != s[i-1]) cnt++;
        }
        res=max(res,cnt);
    }

    cout<<res<<endl;
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