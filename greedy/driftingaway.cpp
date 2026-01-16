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
    int len=s.size();
    for(int i=0;i<len-1;i++){
        if(s[i]=='*' && s[i+1]=='*'){
            cout<<-1<<endl;
            return;
        }
        else if(s[i]=='*' && s[i+1]=='<'){
            cout<<-1<<endl;
            return;
        }
        else if(s[i]=='>' && s[i+1]=='*'){
            cout<<-1<<endl;
            return;
        }
        else if(s[i]=='>' && s[i+1]=='<'){
            cout<<-1<<endl;
            return;
        }
    }

    int an=0;
    int bn=0;
    int fg=0;
    for(int i=0;i<len;i++){
        if(s[i]=='<'){
            an++;
        }
        else if(s[i]=='*'){
            fg=1;
        }
        else{
            bn++;
        }
    }
    cout<<max(an,bn)+fg<<endl;
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