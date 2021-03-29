// 75	DSA06018	BỔ SUNG PHẦN TỬ
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int x=a[0];
        int d=a[n-1];
        int z=0;
        for(int i=x;i<d+1;i++){
            if(binary_search(a,a+n,i)!=1) z++;
        }
        cout<<z<<endl;
    }
}