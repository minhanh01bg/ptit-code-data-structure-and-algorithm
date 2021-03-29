	// 46	DSA04018	ĐẾM SỐ 0
    #include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int d=0;
        for(int i=0;i<n;i++){
            if(a[i]==0) d++;
        }
        cout<<d;
        cout<<endl;
    }
}