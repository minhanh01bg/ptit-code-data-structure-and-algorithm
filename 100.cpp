	// 100	DSA08017	SỐ LỘC PHÁT 1
    #include<iostream>
using namespace std;
int n,a[1000];
void res(){
    for(int i=1;i<=n;i++) {
        if(a[i]==0) cout<<8;
        else cout<<6;
    }
    cout<<" ";
}
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n) res();
        else Try(i+1);
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        while(n){
            Try(1);
            n--;
        }
        cout<<endl;
    }
    return 0;
}