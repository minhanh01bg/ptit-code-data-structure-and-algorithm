#include<bits/stdc++.h>
using namespace std;//CHUYỂN DANH SÁCH CẠNH SANG DANH SÁCH KỀ
int main(){
    int t;
    cin>>t;
    while(t--){
        int v, e;
        cin >> v >> e;
        vector<int>x[e];
        int a,b;
        for(int i=0;i<e;i++){
            cin >> a >> b;
            x[a].push_back(b);
            x[b].push_back(a);
        }
        for(int i=1;i<=v;i++){
            sort(x[i].begin(),x[i].end());
        }
        for(int i=1;i<=v;i++){
            cout<<i<<": ";
            for(int j=0;j<x[i].size();j++){
                cout<<x[i][j]<<" ";
            } 
            cout<<endl;

        }
    }
}