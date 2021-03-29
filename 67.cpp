// 67	DSA06010	SẮP XẾP CHỮ SỐ
#include<bits/stdc++.h>
using namespace std;
set<int>b;
void c(int n){
    int d,i=0;
    while(n){
        d=n%10;
        b.insert(d);
        n/=10;i++;
    }
}
int main(){
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        int a[n];
        for(int i=0;i<n;i++)    {
            cin>>a[i];
            c(a[i]);
        }
        for(auto i:b){
            cout<<i<<" ";
        }
        b.clear();
        cout<<endl;
    }
}