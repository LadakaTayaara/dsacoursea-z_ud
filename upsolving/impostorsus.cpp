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
    cin >> s;
    int len=s.size();
    int res=0;
    
    if(s[0]=='u'){
        res++;
        s[0]='s';
    }

    if(s[len-1]=='u'){
        res++;
        s[len-1]='s';
    }

    for(int i=0;i<len;i++){
        if(s[i]=='u'){
            int cnt=0;
            while(s[i]=='u' && i<len){
                cnt++;
                i++;
            }
            res+=floor(cnt/2);
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