//upsolve later, logical errors

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
    string r;
    cin>>r;
    int cnt=0;
    int len=r.length();
    for(int i=2;i<len;i++){
        if(r[i-2]=='s' && r[i-1]=='u' && r[i]=='u'){
            r[i]='s';
            cnt++;
        }
        else if(r[i-2]=='u' && r[i-1]=='u' && r[i]=='u'){
            r[i-2]='s';
            r[i]='s';
            cnt+=2;
        }
    }

    for(int i=1;i<len-1;i++){
        if(r[i]=='u' && (r[i-1]=='s' && r[i+1]=='s')){
            continue;
        }
        else{
            r[i]='s';
            cnt++;
        }

        if(r[len-1]=='u' && r[len-2]=='u'){
            r[len-1]='s';
            cnt++;
        }
    }
    cout<<cnt<<endl;
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