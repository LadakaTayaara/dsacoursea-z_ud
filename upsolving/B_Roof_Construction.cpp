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
    int temp=n;

    if(n==2){
        cout<<0<<" "<<1<<endl;
        return;
    }

    if(n==3){
        cout<<2<<" "<<0<<" "<<1<<endl;
        return;
    }

    int k = 1;
    while (k * 2 < n) {
        k *= 2;
    }
    int bt=1;

    for(int i=0;i<n;i++){
        if(bt<n){
            if(bt==k){
                cout<<0<<" "<<bt<<" ";
            }
            else{
                cout<<bt<<" ";
            }
        }
        bt++;
    }

    cout<<endl;
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