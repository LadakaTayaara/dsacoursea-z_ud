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
    int X=0;
    while(n--){
        string x;
        cin>>x;
        if((x[2]=='+' && x[1]=='+') || (x[0]=='+' && x[1]=='+')){
            X++;
        }
        else if((x[2]=='-' && x[1]=='-') || (x[0]=='-' && x[1]=='-')){
            X--;
        }
    }
    cout<<X;
    }
    

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}