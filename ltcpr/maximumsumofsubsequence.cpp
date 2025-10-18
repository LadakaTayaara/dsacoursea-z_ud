#include <bits/stdc++.h>
using namespace std;

int f(vector<int> &a,int id){
    if(id==0)return a[id];
    if(id<0)return 0;
    int prev=a[0];
    int prev2=0;
    for(int i=1;i<id;i++){
        int pick=a[id];
        if(id>1)pick+=prev2;
        int notpick=0+prev;
        int curi=max(pick,notpick);
        prev2=prev;
        prev=curi;
    }
    cout<<prev;
}