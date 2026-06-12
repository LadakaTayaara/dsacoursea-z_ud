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
    int n,m;
    cin >> n >> m;
    vector<vector <int>> a(n,vector<int>(m));
    int negcnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]<0)negcnt++;
        }
    }

    int minval=INT_MAX;
    ll sum=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(a[i][j]<0){
                a[i][j]*=-1;
           }
           minval=min(minval,abs(a[i][j])); 
           sum+=a[i][j];
        }
    }

    if(negcnt%2==0){
        cout<<sum<<endl;
        return;
    }
    else{
        cout<<sum- 2*minval<<endl;
        return;
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