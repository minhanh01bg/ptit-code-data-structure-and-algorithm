#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define run() int t;cin>>t;while(t--)
#define endl "\n"


// int dynamicp(int a,int n,int k){
//     dp[0][0]=0;
//     for(int i=0;i<k;i++){
//         dp[0][k]=-1005;
//     }
//     for(int i=1;i<=n;i++) {
//         cin>>a;
//         a%=k;
//         for(int j=0;j<k;j++){
//             dp[i][j]=max(dp[i-1][j],dp[i-1][(j+k-a)%k]+1);
//         }        
//     }   
//     return dp[n][0];
// }
int main(){
    run() {
        int n, k;
        cin >> n >> k;
        int a, dp[n+5][k]; 

        dp[0][0]=0;
        for(int i = 1;i < k; i++)
            dp[0][i]=INT_MIN;
        
        for(int i = 1;i <= n; i++) {
            cin >> a;
            a = a % k;

            for(int j = 0;j < k; j++){
                dp[i][j] = max(dp[i-1][j], dp[i-1][(j+k+a)%k]+1);
            }
        }
        cout << dp[n][0] << endl;
    }
}  