#include<bits/stdc++.h>
using namespace std;
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define BEGIN() int t;cin>>t;while(t--)
#define FAST() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long 
#define endl "\n"

const int mod = 1e9 + 7;
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll m,n,c1,c2;
	cin>>m>>n>>c1>>c2;
	ll A[m],B[n];
	for(int i=0;i<m;i++) cin>>A[i];
	for(int i=0;i<n;i++) cin>>B[i];
	
	int dem;
	sort(A, A + m);
	sort(B, B + n);

	int a = 0, b = 0;
	ll min= 1e18;
	while (a < m && b < n)
	{
		if (abs(A[a] - B[b]) < min){
			min = abs(A[a] - B[b]);
			dem=0;
		}
		if (abs(A[a] - B[b]) == min)
			dem++;	
		if (A[a] < B[b])
			a++;

		else
			b++;
	}
	ll res=min + abs(c1-c2);
	cout<<res<<" "<<dem;
	return 0;
}
/*
void solve(){
	int n;
	cin >> n;
	int a[n];
	int sum1 = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum1 += a[i];
	}
	sort(a, a + n);
	int b[n];
	int base = a[0];
	while(base > 0){
		bool ok = true;
		b[0] = a[0] / base;
		for(int i = 1; i < n; i++){
			b[i] = a[i] / base;
		}
		for(int i = 0; i < n; i++){
			if(base != a[i] / b[i]){
				ok = false;
				break;
			}
		}
		if(ok){
			break;
		}
		base--;
	}
	for(int i = 0; i < n; i++)
		while( b[i] - 1 > 0 && a[i] / (b[i] - 1) == base){
			b[i]--;
		}
	int res = 0;
	if(base){
		for(int i = 0; i < n; i++){	

			res += b[i];
		}
		cout << res;
	}
	
}

int main()
{
	solve();
	return 0;
}*/