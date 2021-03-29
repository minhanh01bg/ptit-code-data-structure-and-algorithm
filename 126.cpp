// 126	DSA03007	GIÁ TRỊ NHỎ NHẤT CỦA BIỂU THỨC
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool comp(int a,int b){
    return a>b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++) 
            cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(b,b+n,comp);
        ll sum =0;
        for(int i=0;i<n;i++){
            sum+=(a[i]*b[i]);
        }
        cout<<sum<<endl;
    }
}