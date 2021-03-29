#include<bits/stdc++.h>
using namespace std;
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define BEGIN() int t;cin>>t;while(t--)
#define FAST() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long 
#define endl "\n"
void reduceFraction(int x, int y,int c,int d) {
    int k;
    k = __gcd(x, y);
  
    x = x / k;
    y = y / k;
    c=x;
    d=y;cout<<c<<" "<<d<<endl;
}
int main(){
    FAST()
    // BEGIN(){
    int n;
    cin>>n;
    int a[n];
    FOR(i,0,n-1)
        cin>>a[i];
    int sum=0;
    FOR(i,0,n-2){
        int c,d;
        reduceFraction(a[i+1],a[i],c,d);
        cout<<c<<" "<<d<<endl;
        // sum=sum+c+d;
    }
    cout<<sum;
        
    // }
    return 0;
}
