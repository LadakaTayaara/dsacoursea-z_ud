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

void printvec(vector<int> &a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    int r=n/2;
    int re=n/2 + 1;
    for(int i=0;i<n;i++){
        if(i%2 == 0){
            a[i]=re;
            re++;
        }
    }

    for(int i=0;i<n;i++){
        if(i%2!=0){
            a[i]=r;
            r--;
        }
    }


    printvec(a,n);
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