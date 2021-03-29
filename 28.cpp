// 28	DSA03002	NHẦM CHỮ SỐ
#include<bits/stdc++.h>
using namespace std;
void mi(string &s){
    for(int i=0;i<s.length();i++){
        if(s[i]=='5') s[i]='6';
        // else if(s[i]=='6') s[i]='5';
    }

}
void mi1(string &s){
    for(int i=0;i<s.length();i++){
        if(s[i]=='6') s[i]='5';
    }
}
int chuyen(string s){
    int d=0,x=10;
    for(int i=0;i<s.length();i++){
        d=(s[i]-'0')+d*10;
        x*=x;
    }
    // if(s[s.length()-1]=='0') d*=10;   
    return d;
}
int main(){
    
    string s1,s2;
    cin>>s1>>s2;
    int d1=0,d2=0;
    mi1(s1);mi1(s2);
    cout<<chuyen(s1)+chuyen(s2)<<" ";
    mi(s1);mi(s2);
    cout<<chuyen(s1)+chuyen(s2);
    cout<<endl;

    
}