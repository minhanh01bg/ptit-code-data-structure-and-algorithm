// 53	DSA05005	SỐ BƯỚC ÍT NHẤT
#include<bits/stdc++.h>
using namespace std;
#define run() int t;cin>>t;while(t--)
#define fast(); ios_base::sync_with_stdio(0); cin.tie(0);
int main(){
    fast();
    run(){
        int n;
        cin>>n;
        int a[n];int l[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
            l[i]=1;    
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[j]>=a[i]&&l[j]<=l[i]){
                    l[j]=l[i]+1;
                }
            }
        }
        cout<<n-*max_element(l,l+n)<<endl;
    }
    return 0;
}