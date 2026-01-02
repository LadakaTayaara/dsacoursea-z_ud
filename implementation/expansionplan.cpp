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
    long long n,x,y;
    cin >> n >> x >> y;
    string s(n,'*');
    cin>>s;
    long long ax=0,ay=0;
    for(int i=0;i<n;i++){
        if(s[i]=='4'){
            ax++;
        }
        else if(s[i]=='8'){
            ax++;
            ay++;
        }
    }

    long long ck=abs(x)+abs(y);
    if((ck<=ax+ay) && (max(ax,ay)>=max(abs(x),abs(y)))){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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