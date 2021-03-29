// 73	DSA06016	TÍCH LỚN NHẤT - NHỎ NHẤT
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        long long d=*max_element(a,a+n);
        long long c=*min_element(b,b+n);
        cout<<c*d<<endl;
    }
}