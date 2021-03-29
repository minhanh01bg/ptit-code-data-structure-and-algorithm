	// 103	CTDL_001	THUẬT TOÁN SINH
    #include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for (ll i = a; i <= b; i++)
#define FORD(i, a, b) for (ll i = a; i >= b; i--)
#define FILEIN freopen("in.txt", "r", stdin)
#define run() int t;cin>>t;while(t--)
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
#define MAX 20
int a[MAX],n;
bool stop = false;
bool check(){
	int b[MAX],x=1;
	FORD(i,n,1)
		b[x++]=a[i];
	
	FOR(i,1,n)
		if(a[i]!=b[i]) return false;
	return true;
}
void init(){
	cin >> n;
	FOR(i,1,n)
		a[i]=0;
}
void res(){
	FOR(i,1,n) cout<<a[i]<<" ";
	cout<<endl;
}
void sinh(){
	int i=n;
	while(i>0&&a[i]==1) {
		a[i]=0;
		i--;
	}
	if(i<1) stop = true;
	else a[i]=1;
}
void so(){
	stop=false;
	while(!stop){
		if(check()) res();
		sinh();
	}
}
int main(){
    fast();
    init();
	so();
}