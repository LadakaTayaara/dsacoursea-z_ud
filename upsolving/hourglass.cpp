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

int chck(int i,int len,string a){
    for(int j=i;j<i+7;j++){
        if(a[i]!=a[j]){
            return 0;
        }
    }
    return 1;
}

void solve() {
    string s;
    cin>>s;
    int len=s.size();
    if(len<7){
        cout<<"NO";
        return;
    }

    int flag=0;
    for(int i=0;i<len-6;i++){
        if(chck(i,len,s)){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"YES\n";
        return;
    }
    else{
        cout<<"NO\n";
        return;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}