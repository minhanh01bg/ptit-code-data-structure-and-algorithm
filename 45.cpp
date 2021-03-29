// 45	DSA04017	PHẦN TỬ KHÁC NHAU
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        m=n-1;
        int a[n],b[m];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]) {cout<<i+1<<endl;break;}
        }
        
    }
}