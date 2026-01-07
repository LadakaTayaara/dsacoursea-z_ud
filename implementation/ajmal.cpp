#include <bits/stdc++.h>
#include <string>
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
    vector<string> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    string s=a[0];
    if(n==1){
        cout<<s<<"\n";
        return;
    }
    for(int i=1;i<n;i++){
        if (s + a[i] <= a[i] + s) {
            s+=a[i];
        }
        else{
            s=a[i]+s;
        }
    }
    cout<<s<<"\n";
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