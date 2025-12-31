#include <bits/stdc++.h>
#include <string.h>
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for(int i=0;i<n;i++){
        if(s[i]=='1' && (i+k)<=n-1){
            for(int j=i+1;j<=i+k;j++){
                s[j]='6';
            }
        }
    }
    int res=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            res++;
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

//work on this later