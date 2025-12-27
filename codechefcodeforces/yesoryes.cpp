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
    string s;
    cin>>s;
    int len=s.length();
    vector<int> sa(len,-1);
    for(int i=len-1;i>=0;i--){
        if(s[i]=='y' || s[i]=='Y'){
            sa[i]=1;
        }
        else{
            sa[i]=0;
        }
    }
    
    int flag=0;
    for(int i=len-1;i>=1;i--){
        if((sa[i]==1) && (sa[i-1]==1)){
            flag=1;
            break;
        }
        else{
            sa[i-1]= sa[i-1] || sa[i];
            len--; 
        }
    }
    if(flag==1){cout<<"NO\n";}
    else if(flag==0){cout<<"YES\n";}
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