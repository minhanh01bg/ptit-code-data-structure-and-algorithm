// 29	DSA03003	TÌM MAX
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
        long long sum=0;
        long long d=1e9+7;
        for(int i=0;i<n;i++){
            sum+=((a[i]*i)%d);
        }
        sum=sum%d;
        cout<<sum<<endl;
    }
}