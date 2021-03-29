#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string a,b;
    while(t--){
        cin>>a>>b;
        int n=a.size(),m=b.size();
        int lis[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j = 0;j <= m; j++){
                if(i==0||j==0){
                    lis[i][j]=0;
                }
                else if(a[i-1]==b[j-1]){
                    lis[i][j]=lis[i-1][j-1]+1;
                }
                else lis[i][j]=max(lis[i-1][j],lis[i][j-1]);
            }
        }
        // for(int i=0;i<=n;i++){
        //     for(int j = 0;j <= m; j++){
        //         cout<<lis[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        cout<<lis[n][m]<<endl;
    }
}