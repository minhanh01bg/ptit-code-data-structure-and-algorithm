	// 159	DSA07016	BIỂU THỨC TĂNG GIẢM
    /* code by vu minh anh */
#include <bits/stdc++.h>
// #define ll long long
// #define FOR(i, a, b) for (ll i = a; i <= b; i++)
// #define FORD(i, a, b) for (ll i = a; i >= b; i--)
#define run() int t;cin>>t;while(t--)
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
void printLeast(string arr) {
    int min_avail = 1, pos_of_I = 0;
 
    vector<int>v;
 
    if (arr[0]=='I') {
        v.push_back(1);
        v.push_back(2);
        min_avail = 3;
        pos_of_I = 1;
    }
    else
    {
        v.push_back(2);
        v.push_back(1);
        min_avail = 3;
        pos_of_I = 0;
    }
 
    for (int i=1; i<arr.length(); i++)
    {
        if (arr[i]=='I')
        {
            v.push_back(min_avail);
            min_avail++;
            pos_of_I = i+1;
        }
        else
        {
            v.push_back(v[i]);
            for (int j=pos_of_I; j<=i; j++)
                v[j]++;
 
            min_avail++;
        }
    }
    for (int i=0; i<v.size(); i++)
        cout << v[i];
    cout << endl;
}
 
int main(){
	fast();
	run() {
		string str;
		cin >> str;
		printLeast(str);
	}
}
