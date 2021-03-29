// 92	DSA08006	SỐ 0 VÀ SỐ 9
#include <bits/stdc++.h>
using namespace std;
int Stoi(string s){
    int d=0;
    for(int i=0;i<s.length();i++){
        d=(s[i]-'0')+d*10;
    }
    return d;
}
vector<string>vec;
int k=10000;
void generatePrintBinary(){
    queue<string> q;
 
    q.push("9");
 
    while (k--) {
        string s1 = q.front();
        q.pop();
        vec.push_back(s1);
        string s2 = s1; 
        q.push(s1.append("0"));
        q.push(s2.append("9"));
    }
}
int main() {
    int t;
    cin>>t;
    generatePrintBinary();
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<vec.size();i++)
            if(Stoi(vec[i])%n==0){
                cout<<vec[i]<<endl;
                break;
            }
    }
    return 0;
}