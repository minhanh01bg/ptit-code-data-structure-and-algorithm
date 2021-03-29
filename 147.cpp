	// 147	DSA05003	DÃY CON CHUNG DÀI NHẤT CỦA BA XÂU
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define run() int t;cin>>t;cin.ignore();while(t--)
#define fast() ios_base::sync_with_stdio(0);cin.tie(0)
#define pb push_back
int mi(string s1,string s2,string s3,int n,int m,int k){
	int dp[n+1][m+1][k+1];
	for(int i=0;i<=n;i++)
		for(int j=0;j<=m;j++){
			for(int t=0;t<=k;t++){
				if(i==0||j==0||t==0)
					dp[i][j][t]=0;
				else if(s1[i-1]==s2[j-1]&&s2[j-1]==s3[t-1])
					dp[i][j][t]=dp[i-1][j-1][t-1]+1;
				else dp[i][j][t]=max(dp[i-1][j][t],max(dp[i][j-1][t],dp[i][j][t-1]));
			}
				
		}
	
	return dp[n][m][k];
}
int main(){
	fast();
	string s1,s2,s3;
	run(){
		int n,m,k;
		cin>>n>>m>>k;
		cin>>s1>>s2>>s3;
		cout<<mi(s1,s2,s3,n,m,k)<<endl;
	}
}
