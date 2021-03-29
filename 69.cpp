// 69	DSA06012	PHẦN TỬ LỚN NHẤT
#include<bits/stdc++.h>
using namespace std;
bool comp(const int a, const int b){
   return a > b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n,comp);
        for(int i=0;i<k;i++) cout<<a[i]<<" ";
        cout<<endl;
        
    }
}