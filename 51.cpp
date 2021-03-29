// 51	DSA05013	BẬC THANG
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define EL printf("\n")
#define OK printf("OK")
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define X  first
#define Y  second
#define fillchar(a,x) memset(a, x, sizeof(a))
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FORD(i,r,l) for (int i=r;i>=l;i--)
const int p = 1e9+7;
#define run() int t;cin>>t;while(t--)
#define endl "\n"

int main(){
	run(){
        int n,k;
        cin >> n >> k;
        ll dp[n+1]={0};
        dp[0]=1,dp[1]=1;
        FOR(i,2,n){
            FOR(j,1,min(i,k)){
                dp[i]+=dp[i-j];
                dp[i]%=p;
            }
        }
        cout<<dp[n]<<endl;
    }
}