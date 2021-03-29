// 27	DSA03001	ĐỔI TIỀN
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        int n;
        cin>>n;
        int m=10,z=0;
        while(n){
            int d=upper_bound(a,a+m,n)-a;
            n-=a[d-1];
            z++;
        }
        cout<<z<<endl;
    }
}