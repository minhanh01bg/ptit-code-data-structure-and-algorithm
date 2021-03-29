// 52	DSA05002	DÃY CON LẶP LẠI DÀI NHẤT
#include <bits/stdc++.h>

#define ll long long
#define FOR(i, a, b) for (ll i = a; i <= b; i++)
#define FORD(i, a, b) for (ll i = a; i >= b; i--)
#define X first
#define Y second
#define run() int t;cin>>t;while(t--)
#define fast(); ios_base::sync_with_stdio(0); cin.tie(0);
const ll p=1e9+7;
using namespace std;


int main(){
    fast();
    run(){
        int n; cin>>n;
        string s;
        cin>>s;
        string str;
        str+=s;
        int dp[101][101]={0};
        dp[0][0]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==str[j-1] && i!=j){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        cout<<dp[n][n]<<endl;
    }
}