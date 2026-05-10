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
    char c;
    cin >> n >> c;
    string s;
    cin>>s;
    s+=s;

    if(c=='g'){
        cout<<0<<endl;
        return;
    }

    int res=INT_MIN;

    for(int i=2*n-1;i>=0;i--){
        if(s[i]=='g'){
            for(int j=i-1;j>=0;j--){
                if(s[j]=='g'){
                    break;
                }
                else if(s[j]==c){
                    res=max(res,i-j);
                }
            }
        }
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