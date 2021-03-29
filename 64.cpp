// 64	DSA06007	SẮP XẾP DÃY CON LIÊN TỤC
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++) {cin>>a[i];b[i]=a[i];}
        sort(a,a+n);
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(b[i]!=a[i]) {
                x=i;
                break;      
            }
        }
        cout<<x+1<<" ";
        for(int i=0;i<n;i++){
            if(b[i]!=a[i]) {
                x=i;
                      
            }
        }
        cout<<x+1<<endl;
        
    }
}