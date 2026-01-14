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
    int n,a,b;
    cin >> n >> a >> b;
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int res=0;
    int jk=0;
    for(int i=0;i<n;i++){
        if(ar[i]<a && jk==0){
            jk=1;
            res++;
        }
        if(ar[i]>b && jk==1){
            jk=0;
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