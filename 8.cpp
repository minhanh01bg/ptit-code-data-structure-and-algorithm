//CHUYỂN TỪ DANH SÁCH KỀ SANG DANH SÁCH CẠNH
#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i=a;i<=b;i++)
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define BEGIN() int t;cin>>t;while(t--)
// struct grap {
    /* data */
    // vector<int>ke[100];
// };
// int d[100][100];

int main(){
    fast()
// BEGIN(){
    int n;
    cin >> n;
    string s;
    cin.ignore();
    vector<int> ke[1000];
    FOR(i,1,n){
        getline(cin, s);
        s+=" ";
        int so=0;
        int j=0;
        while(j < s.size()){
            if(s[j] >= '0' && s[j] <= '9')
                so = 10*so + (s[j]-'0');
            else if(so > 0){
                ke[i].push_back(so);
                so=0;
            }
            j++;
        }
    }
    FOR(i,1,n) sort(ke[i].begin(),ke[i].end());
    FOR(i,1,n){
        FOR(j,0,ke[i].size()-1){
            if(i<ke[i][j]){
                cout<<i<<" ";
                cout<<ke[i][j]<<endl;
            }
        }
    }
// }
}