// 62	DSA06005	HỢP VÀ GIAO CỦA HAI DÃY SỐ 2
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        // set_union<int>c;
        // set_intersection<int>d;
        int a[n],b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++) 
            cin>>b[i];
            sort(a,a+n);
            sort(b,b+m);
        vector<int>c(n+m),d(n+m);
        
        vector<int>::iterator it = set_union(a,a+n,b,b+m,c.begin());
        for(vector<int>::iterator i=c.begin();i!=it;i++){
            cout<<*i<<" ";
        }
        cout<<endl;
        vector<int>::iterator it2= set_intersection(a,a+n,b,b+m,d.begin());
        for(vector<int>::iterator i=d.begin();i != it2;i++){
            cout<<*i<<" ";
        }
        cout<<endl;
    }
}