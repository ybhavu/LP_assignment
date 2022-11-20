#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt",
            "r", stdin);
    freopen("output.txt",
            "w", stdout);
    int n;
    // cout<<"Enter number of processes: ";
    cin>>n;
    vector<vector<int>> dt(n,vector<int>(3));
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>dt[i][j];
        }
    }
    sort(dt.begin(),dt.end());
    vector<int> ct(n);
    ct[0] = dt[0][1];
    for(int i=1;i<n;i++){
        if(ct[i-1] >= dt[i][0]){
            ct[i] = ct[i-1]+dt[i][1];
        }
        else{
            ct[i] = dt[i][0]+dt[i][1];
        }
    }
    for(int i=0;i<n;i++){
        cout<<"Completion of "<<i+1<<" is "<<ct[i]<<endl;
    }




    return 0;
}