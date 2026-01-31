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
    int ih=-1;int ie=-1;int il1=-1;int il2=-1;int io=-1;

    for(int i=0;i<size(s);i++){
        if(s[i]=='h'){
            ih=i;
            break;
        }
    }

    for(int i=ih+1;i<size(s);i++){
        if(s[i]=='e'){
            ie=i;
            break;
        }
    }

    for(int i=ie+1;i<size(s);i++){
        if(s[i]=='l'){
            il1=i;
            break;
        }
    }

    for(int i=il1+1;i<size(s);i++){
        if(s[i]=='l'){
            il2=i;
            break;
        }
    }

    for(int i=il2+1;i<size(s);i++){
        if(s[i]=='o'){
            io=i;
            break;
        }
    }

    if((ih<ie)&&(ie<il1)&&(il1<il2)&&(il2<io)){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}