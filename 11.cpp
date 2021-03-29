//XÂU NHỊ PHÂN KẾ TIẾP

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n= s.length();
        int x=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0') {
                x=1;
                s[i]='1';
                for(int j=i+1;j<n;j++)
                    s[j]='0';
                break;
            }
        }
        if(x==0) {
            for(int i=0;i<n;i++) cout<<0;
            cout<<0;
        }    
        if(x==1)
        for(int i=0;i<n;i++) cout<<s[i];
        cout<<endl;
    }
}