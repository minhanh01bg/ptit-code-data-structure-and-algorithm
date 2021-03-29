// 59	DSA06002	SẮP XẾP THEO GIÁ TRỊ TUYỆT ĐỐI
#include<bits/stdc++.h>
using namespace std;
int k;
bool comp(int a,int b){
    return abs(k-a)<abs(k-b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        stable_sort(a,a+n,comp);
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl; 
    }
}