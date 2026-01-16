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
    vector<int> a(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i!=0 && i!=n-1 && a[i]==-1){
            a[i]=0;
        }
    }
    if(a[0]==a[n-1] && a[0]==-1){
        a[0]=0;
        a[n-1]=0;
    }
    if(a[n-1]==-1 && a[0]!=-1){
        a[n-1]=a[0];
    }
    if(a[0]==-1 && a[n-1]!=-1){
        a[0]=a[n-1];
    }

    cout<<abs(a[n-1]-a[0])<<"\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
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