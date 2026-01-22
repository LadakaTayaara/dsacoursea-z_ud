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
    int n,a,b;
    cin >> n>>a>>b;
    string s;
    cin>>s;

    int i=0;
    pair<int,int> ap={0,0};
    int flag=0;
    int cycle=0;

    while(cycle<=1000){
        if(ap.first==a && ap.second==b){
            flag=1;
            break;
        }
        else{
            if(s[i%n]=='N'){
                ap.second++;
            }
            else if(s[i%n]=='S'){
                ap.second--;
            }
            else if(s[i%n]=='E'){
                ap.first++;
            }
            else if(s[i%n]=='W'){
                ap.first--;
            }
        }
        i++;
        if(i%n==0)cycle++;
    }

    if(flag){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
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