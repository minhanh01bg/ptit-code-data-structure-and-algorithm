// TÍCH LỚN NHẤT
#include<bits/stdc++.h>
using namespace std;
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define BEGIN() int t;cin>>t;while(t--)
#define FAST() ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long 
#define endl "\n"
ll mulmax(int *a, int n){
    sort(a,a+n);
    return max(a[0]*a[1]*a[n-1],a[n-1]*a[n-2]*a[n-3]);
}
int main(){
    FAST()
    // BEGIN(){
    int n;
    cin >> n;
    int a[n];
    FOR(i, 0, n-1)
        cin>>a[i];
    cout<<mulmax(a,n);
    return 0;
    // }
}
