//sieve's algortihm
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
    vector<int> hsh(n+1,0);

    for(int i=2;i<n+1;i++){
        if(hsh[i]==0){
            for(int j=i;j<n+1;j+=i){
                hsh[j]++;
            }
        }
    }

    int res=0;
    for(int i=2;i<n+1;i++){
        if(hsh[i]==2){
            res++;
        }
    }

    cout<<res<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}