// 43	DSA04015	TÍNH FLOOR(X)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int  t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int d=upper_bound(a,a+n,x)-a;
        if(d!=0) cout<<d;
        else cout<<-1;
        cout<<endl;


    }
}