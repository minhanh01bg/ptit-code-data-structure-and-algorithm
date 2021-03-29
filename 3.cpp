#include<bits/stdc++.h>
using namespace std;
void mi(int a[],int n){
    int i,j,MIN_IDX;
    int z=1;
    for(i=0;i<n-1;i++){
        MIN_IDX=i;
        int x=0;
        for(j=i+1;j<n;j++){
            if(a[j]<a[MIN_IDX]){
                MIN_IDX=j;
                x=1;
            }
        }
        
        swap(a[MIN_IDX],a[i]);
        cout<<"Buoc "<<z++<<": ";
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
        
    }
    
}
int main(){
    // int t;
    // cin>>t;
    // while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        mi(a,n);
    // }
}