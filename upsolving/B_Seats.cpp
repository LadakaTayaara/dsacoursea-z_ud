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
    string s;
    cin>>s;
    if(n==1 && s[0]=='0'){cout<<1<<endl;
    return;}

    ll res=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')res++;
    }

    if(res==0 && n>3){res=1;}

    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            int cnt=0;
            while(s[i]!='1' && i<n){
                cnt++;
                i++;
            }
            res+=cnt/3;
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