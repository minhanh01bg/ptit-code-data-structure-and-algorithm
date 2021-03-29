// 70	DSA06013	SỐ LẦN XUẤT HIỆN
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,z=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            if(a[i]==k) z++;
        }
        if(z)
        cout<<z<<endl;
        else cout<<-1<<endl;
    }
}