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
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>> a(n);

    for(int i=0;i<n;i++)cin>>a[i].second;
    for(int i=0;i<n;i++)cin>>a[i].first;

    sort(a.rbegin(),a.rend());

    int flag=0;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(max(a[i].second,a[j].second)>=200){
                if(max(a[i].second,a[j].second)-100 + min(a[i].second,a[j].second) <=k){
                    flag=1;
                    cout<<a[i].first+a[j].first<<endl;
                    return;
                }
            }
            else{
                if(max(a[i].second,a[j].second)/2 + min(a[i].second,a[j].second) <=k){
                    flag=1;
                    cout<<a[i].first+a[j].first<<endl;
                    return;
                }
            }
        }
    }

    if(flag==0){
        cout<<flag<<endl;
    }
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