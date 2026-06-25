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

    int ncnt=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
        if(a[i]<0)ncnt++;
    }

    for(int i=0;i<n;i++)a[i]=abs(a[i]);

    sort(a.begin(),a.end());

    if((ncnt%2) == 1){
        ll sm= -1*a[0];
        for(int i=1;i<n;i++){
            sm+= abs(a[i]);
        }

        cout<<sm<<endl;
        return;
    }
    else{
        ll sm=0;
        for(int i=0;i<n;i++){
            sm+= abs(a[i]);
        }

        cout<<sm<<endl;
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