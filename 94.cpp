// 94	DSA08008	SỐ BDN 2
#include<bits/stdc++.h>
using namespace std;

long long mod(string s,int n){
    long long d=0;
    for(int i=0;i<s.length();i++){
        d=(s[i]-'0')+d*10;
        d=d%n;
    }
    return d;
}
string getMinimumMultipleOfBinaryDigit(int N) {
    queue<string> q;
    set<int> visit;
 
    string t = "1";
 
    q.push(t);
    while (!q.empty()){
        t = q.front();      q.pop();
 
        int rem = mod(t, N);
 
        if (rem == 0)
            return t;
        else if(visit.find(rem) == visit.end())
        {
            visit.insert(rem);
            q.push(t + "0");
            q.push(t + "1");
        }
    }
    return "";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        cout<<getMinimumMultipleOfBinaryDigit(n)<<endl;
    }
}
// #include<bits/stdc++.h>
// using namespace std;
// int n;
// long long mod(string s){
//     long long d=0;
//     for(int i=0;i<s.length();i++){
//         d=(s[i]-'0')+d*10;
//         d=d%n;
//     }
//     return d;
// }
// vector<string>vec;
// int k=1000000;
// string mi(){
//     queue<string>q;
//     q.push("1");
//     string s1,s2;
//     while(k--){
//         s1=q.front();
//         q.pop();
//         int rem=mod(s1);
//         if(rem==0)
//             return s1;
//         s2=s1;
//         q.push(s1.append("0"));
//         q.push(s2.append("1"));
//     }
//     return "";
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         cin >> n;
//         cout<<mi()<<endl;
//     }
// }