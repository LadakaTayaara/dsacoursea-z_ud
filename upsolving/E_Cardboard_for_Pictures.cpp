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
    ll c;
    cin >> n >> c;
    
    vector<ll> a(n);

    for(int i=0;i<n;i++)cin>>a[i];

    ll high= 1e9;
    ll low= 0;
    ll i;
    while(low<=high){
        i=(high+low)/2;
        __int128 sm=0;//remember this pls from now on
        for(int j=0;j<n;j++){
            sm+= (a[j]+ 2*i)*(a[j]+ 2*i);
        }

        if(sm==c){
            break;
        }
        else if(sm<c){
            low=i+1;
        }
        else{
            high=i-1;
        }
    }

    cout<<i<<endl;
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