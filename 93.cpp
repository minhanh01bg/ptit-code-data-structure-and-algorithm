// 93	DSA08007	SỐ BDN 1
//SỐ BDN 1
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define run() int t;cin>>t;while(t--)
#define endl "\n"
/**/

int count(ll n){
    int Count=0;
    queue<ll>b;
    b.push(1);
    ll t;
    while(!b.empty()){
        t=b.front();
        b.pop();
        if(t<=n) {Count++;

            b.push(t*10);
            b.push(t*10+1);
        }
        if(t>n) break;
        
    }
    return Count;
}
int main(){
    run(){
        ll n;
        cin>>n;
        cout<<count(n)<<endl;
    }
}
//SỐ BDN 1
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define run() int t;cin>>t;while(t--)
// #define endl "\n"
// /**/
// ll Stoi(string s){
//     ll d=0;
//     for(int i=0;i<s.length();i++){
//         d=d*10+(s[i]-'0');
//     }
//     return d;
// }
// int count(ll n){
//     int Count=0;
//     queue<string>b;
//     b.push("1");
//     string s1,s2;
//     while(!b.empty()){
//         s1=b.front();
//         b.pop();
//         if(Stoi(s1)<=n) Count++;
//         if(Stoi(s1)>n) break;
//         s2=s1;
//         b.push(s1.append("0"));
//         b.push(s2.append("1"));
//     }
//     return Count;
// }
// int main(){
//     run(){
//         ll n;
//         cin>>n;
//         cout<<count(n)<<endl;
//     }
// }