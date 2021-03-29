// 77	DSA06020	TÌM KIẾM
#include<iostream>
using namespace std;
int binary(int a[],int n,int k){
    int l=0,r=n-1;
    while(l < r){
        int mid = (l+r)/2;
        if(a[mid]<k) l++;
        else if(a[mid]>k) r--;
        else if(a[mid]==k) return mid;
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        if(binary(a,n,k)!=-1) cout<<1;
        else cout<<-1;
        cout<<endl;    
    }
}