// 79	DSA06022	SỐ NHỎ NHẤT VÀ NHỎ THỨ HAI
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int d=*min_element(a,a+n);
        int e=d;
        if(upper_bound(a,a+n,d)-a<n)
            e=a[upper_bound(a,a+n,d)-a];
        if(e!=d) cout<<d<<" "<<e<<endl;
        else cout<<-1<<endl;
    }
}