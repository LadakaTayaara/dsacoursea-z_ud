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
    ll n;
    cin >> n;
    string s(n,' ');
    vector<int> a(150,0);
    cin>>s;
    for(int i=0;i<n;i++){
        if(((char)s[i]>=65) && ((char)s[i]<=90)){
            s[i]+=32;
        }
        a[s[i]]++;
    }

    ll res=0;
    ll maxi=0;
    for(int i=85;i<150;i++){
        if(a[i]>a[maxi]){
            maxi=i;
        }
    }
    res+=a[maxi];
    a[maxi]=0;
    res+=*max_element(a.begin(),a.end());

    cout<<res<<endl;
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