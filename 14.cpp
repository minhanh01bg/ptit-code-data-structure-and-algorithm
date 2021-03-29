//	14	DSA01007	XÂU AB CÓ ĐỘ DÀI N
#include<bits/stdc++.h>
using namespace std;
int a[100];
int n;
void res(){
    for(int i=1;i<=n;i++){
        if(a[i]==0) cout<<"A";
        else cout<<"B";
    }
    cout<<" ";
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
        cin>>n;
        Try(1);
        cout<<endl;
    }
}