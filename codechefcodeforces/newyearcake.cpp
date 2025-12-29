//upsolve this code later for greedy concepts

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
    long long a,b;
    cin>>a>>b;
    if(a>b){
        swap(a,b);
    }
    int i=0;
    int mf=1;
    int res=0;
    while(a>0 && b>0){
        if(i%2==0 && a-mf>=0){
            a-=mf;
            res++;
        }
        else if(i%2!=0 && b-mf>=0){
            b-=mf;
            res++;
        }
        i++;
        mf*=2;
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