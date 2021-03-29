#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, m, X;
        cin >> n >> m >> X;
        ll ab=X%n;
        ll cd=(X/n);
        if(ab!=0)
            cd=(X/n)+1;
        if(ab==0) ab=n;
        cout<<(ab-1)*m+cd<<endl;
    }
    return 0;
}