// 114	DSA01017	MÃ GRAY 3
#include<bits/stdc++.h>
//code by vu minh anh
#define FOR(i,l,r) for (int i=l;i<=r;i++)
using namespace std;
#define run() int t;cin>>t;while(t--)
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long 
#define endl "\n"
int main(){
	run(){
		string s;
		cin>>s;
		cout<<s[0];
		FOR(i,1,s.size()-1){
			if(s[i]!=s[i-1]) cout<<1;
			else cout<<0;
		}
		cout<<endl;
	}
}