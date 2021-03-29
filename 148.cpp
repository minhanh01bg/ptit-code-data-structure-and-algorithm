// 148	DSA05006	TỔNG LỚN NHẤT CỦA DÃY CON TĂNG DẦN
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
ll maxsum(int a[],int n){
    ll lis[n]={0};
    lis[0]=a[0];
    for(int i = 1;i < n; i++){
        lis[i] = a[i];
        for(int j = 0;j < i; j++){
            if(a[i]>a[j] && lis[i]<lis[j]+a[i]){
                lis[i]=lis[j]+a[i];
            }
        }
    }
    return *max_element(lis,lis+n); 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<maxsum(a,n)<<endl;
    }
}