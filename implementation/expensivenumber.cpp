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
    string s;
    cin>>s;
    int len=s.size();
    int last=0;
    int ans=len-1;
    for(int i=len-1;i>=0;i--){
        if(s[i]!='0'){
            last=i;
            break;
        }
    }

    for(int i=0;i<=last;i++){
        if(s[i]=='0'){
            ans--;
        }
    }

    cout<<ans<<endl;
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