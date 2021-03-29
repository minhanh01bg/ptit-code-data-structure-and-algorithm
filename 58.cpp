// 58	DSA06001	SẮP XẾP XEN KẼ
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
        for(int i=0,j=n-1;i<n/2,j>=n/2;j--,i++){
            if(i!=j)
            cout<<a[j]<<" "<<a[i]<<" ";
        }
        if(n%2) cout<<a[n/2];
        cout<<endl;
    }
}