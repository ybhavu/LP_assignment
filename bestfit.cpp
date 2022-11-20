#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt",
            "r", stdin);
    freopen("output.txt",
            "w", stdout);
    vector<int> bs(5);
    vector<int> ps(4);
    for(int i=0;i<5;i++){
        cin>>bs[i];
    }
    for(int i=0;i<4;i++){
        cin>>ps[i];
    }
    
    vector<int> ans(4);
    for(int i=0;i<4;i++){
        int key =-1;
        int bf = INT_MAX;
        for(int j=0;j<5;j++){
            int diff = bs[j]-ps[i];
            if(diff >=0){
                if(diff < bf){
                    bf = diff;
                    key = j;
                }
            }
        }
        if(key != -1){
            bs[key] -= ps[i];
            ans[i] = key+1;
        }
        else{
            ans[i] = -9999;
        }
        
    }
    for(auto x: ans){
        cout<<x<<" ";
    }
    
    return 0;
}