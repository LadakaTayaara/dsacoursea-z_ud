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
    vector<int> a(n),hsh(n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
        hsh[a[i]]++;
    }

    int maxpos=0;
    for(int i=1;i<n+1;i++){
        if(hsh[i]>hsh[maxpos]){
            maxpos=i;
        }
    }

    cout<<maxpos<<endl;
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