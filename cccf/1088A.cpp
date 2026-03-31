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
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    
    if(n<3){
        if(n==1){cout<<1<<endl;
        return;}
        if(n==2){cout<<"2 2\n";
        return;}
    }
    else{
       for(int i=0;i<n;i++)cout<<2<<" "; 
       cout<<endl;
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