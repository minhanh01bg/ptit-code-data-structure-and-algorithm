	// 99	DSA04020	TÌM KIẾM NHỊ PHÂN
    #include<bits/stdc++.h>
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
        auto p= find(a,a+n,k);
        if(p!=a+n) cout<<binary(a,n,k)+1;
        else cout<<"NO";
        cout<<endl;
    }
}