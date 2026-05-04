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
    int n,q;
    cin >> n>>q;
    vector<int> a(n),b(n);

    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];

    for(int i=n-1;i>=0;i--){
            if(i+1>=n){
                a[i]=max(a[i],b[i]);
            }
            else{a[i]=max({a[i],a[i+1],b[i]});}
        }

    vector<ll> prs(n);
    for(int i=0;i<n;i++){
        if(i==0){
            prs[i]=a[0];
        }
        else{
            prs[i] = prs[i-1] + a[i];
        }
    }

    while(q--){
        int l,r;
        cin>>l>>r;
        l--,r--;

        
        if(l==0){cout<<prs[r]<<" ";
        continue;}
        else{
        cout<<prs[r]-prs[l-1]<<" ";}
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