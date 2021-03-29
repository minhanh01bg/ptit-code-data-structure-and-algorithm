// 18	DSA01008	XÂU NHỊ PHÂN CÓ K BIT 1
#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
bool ke(int a[],int n,int k){
    int d=0;
    for(int i=1;i<n+1;i++){
        if(a[i]==1) d++;
    }
    if(d==k) return true;
    else return false;
}
void res(){
    if(ke(a,n,k)==1){
        for(int i=1;i<=n;i++) cout<<a[i];
        cout<<endl;
    }
    
}
void Try(int i){
    for(int j=0;j<2;j++){
        a[i]=j;
        if(i==n) res();
        else Try(i+1);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){    
        cin>>n>>k;
        Try(1);
    }
}