//13	DSA01003	HOÁN VỊ KẾ TIẾP
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int x=0;
        for(int i=n-1;i>0;i--){
            if(a[i]>a[i-1])  {
                x=1;
                swap(a[i-1],*min_element(a+i,a+n));
                sort(a+i,a+n);
                break;
            }
        }
        if(x==1)
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        else for(int i=n-1;i>=0;i--) cout<<a[i]<<" ";
        cout<<endl;
    }
    
    
}