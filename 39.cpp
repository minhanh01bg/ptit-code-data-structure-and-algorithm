// 39	DSA04003	ĐẾM DÃY
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define EL() cout<<"\n";
#define OK 
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define X  first
#define Y  second
#define fillchar(a,x) memset(a, x, sizeof(a))
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FORD(i,r,l) for (int i=r;i>=l;i--)
const int p = 1e9;
#define run() int t;cin>>t;while(t--)
#define endl "\n"

ll mod = 123456789;
//2^(n-1)
//bài toán tìm nghiệm nguyên dương của x1+x2+x3+..+xn=k;
//C k của n-1+k
ll count(ll n){
    if(n==0) return 1;
    if(n==1) return 2;
    ll t= count(n/2);
    t=(t*t)%mod;
    if(n & 1) t=(t*2)%mod;
    return t;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    run(){
        ll n;
        cin>>n;
        cout<<count(n-1);
        EL()
    }
    return 0;
}