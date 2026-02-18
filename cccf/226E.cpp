//Time limit exceeded

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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int mini=0;
    int res=INT_MAX;

    sort(a.begin(),a.end());
    while(*max_element(a.begin(),a.end()) - *min_element(a.begin(),a.end()) >= 0){
        //min index

        res=min(res,*max_element(a.begin(),a.end()) - *min_element(a.begin(),a.end()));

        for(int i=0;i<n;i++){
            if(a[i]<a[mini]){
                mini=i;
            }
        }

        a[mini]=a[mini]*2;
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