#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int nin(int day,int last,vector<vector<int>> &points, vector<vector<int>> &dp){
    if(dp[day][last]!=-1){
        return dp[day][last];
    }
    if(day==0){
        int maxi=0;
        for(int task=0;task<3;task++){
            if(task!=last){
                maxi = max(maxi, points[0][task]);
            }
        }
        return dp[0][last]=maxi;
    }
    int maxi=0;
    for(int task=0;task<3;task++){
            if(task!=last){
                int point=points[day][task]+nin(day-1,task,points,dp);
                maxi = max(maxi, point);
            }
    }
    return dp[day][last]=maxi;
}

int main(){
    
}