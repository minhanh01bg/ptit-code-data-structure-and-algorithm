	// 101	DSA08018	SỐ LỘC PHÁT 2
#include<bits/stdc++.h>
using namespace std;
int a[100],n;
int z=0;
void res(){  
    z++;
}
void Try(int i){
    for(int j=0;j<2;j++){
        a[i]=j;
        if(i==n) res();
        else Try(i+1);
    }
}
void Res(){
    for(int i=1;i<=n;i++){
        if(a[i]==0) cout<<6;
        else cout<<8;
    }
    cout<<" ";
}
void TRy(int i){
    for(int j=0;j<2;j++){
        a[i]=j;
        if(i==n) Res();
        else TRy(i+1);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        z=0;
        int d;
        cin>>n;
        d=n;
        for(int i=1;i<=d;i++){
            n=i;
           Try(1);
            // TRy(1);
        }
        cout<<z<<endl;
        for(int i=1;i<=d;i++){
            n=i;
            TRy(1);
        }

        cout<<endl;
    }
}