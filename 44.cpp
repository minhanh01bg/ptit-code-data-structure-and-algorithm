// 44	DSA04016	PHẦN TỬ THỨ K
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;    cin>>n>>m>>k;
        int a[n],b[m];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        vector<int>c;
        for(int i=0;i<n;i++){
            c.push_back(a[i]);
        }
        for(int i=0;i<m;i++){
            c.push_back(b[i]);
        }
        sort(c.begin(),c.end());
        cout<<c[k-1];
        cout<<endl;
    }
}