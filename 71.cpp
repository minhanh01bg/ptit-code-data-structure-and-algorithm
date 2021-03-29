// 71	DSA06014	TỔNG CẶP SỐ NGUYÊN TỐ
#include<bits/stdc++.h>
using namespace std;
bool nt(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        int x=0;
        for(int i=2;i<=sqrt(n);i++){
            if(nt(i)&&nt(n-i)){
                x=1;
                cout<<i<<" "<<n-i;
                break;
            }
        }
        if(x==0) cout<<-1;
        cout<<endl;
    }
}