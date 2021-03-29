// 42	DSA04010	DÃY CON LIÊN TIẾP CÓ TỔNG LỚN NHẤT
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
        int res=0,ans=INT_MIN;
        for(int i=0;i<n;i++){
            res=a[i];
            for(int j=i+1;j<n;j++){
                res+=a[j];
                ans=max(ans,res);
            }
        }
        cout<<ans<<endl;
    }
}