#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s(n,'*');
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int ways=0;
        int chef=0;
        int anti=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                chef++;
            }
            if(s[i]=='0'){
                anti++;
            }
            if(chef>anti){
                ways++;
            }
        }
        cout<<ways<<'\n';
    }
}
