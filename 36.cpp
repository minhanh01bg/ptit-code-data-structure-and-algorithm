// 36	DSA03015	MUA LƯƠNG THỰC
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        if(((n*6) < (m*7)&&s>6)||m>n) {
            cout<<-1<<endl;
            continue;
        }
        int d=s*m,x=0,z=s/7;
        x=d/n;
        if(d%n!=0) x++;
        cout<<x<<endl;
    }
}