// 38	DSA04004	GẤP ĐÔI DÃY SỐ
#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define run() int t;cin>>t;while(t--)
#define fast() ios_base::sync_with_stdio(0);cin.tie(0)
#define pb push_back
#define end return
ll power(int n){
    if(n==0) return 1;
    if(n==1) return 2;
    ll t= power(n/2);
    t=t*t;
    if(n%2!=0) t=t*2;
    return t;
}
void mi(int n,ll k){
    ll length=power(n)/2;
    
    while(1){
        if(n==1){
            cout<<1;break;
        }
        if(k==length) {
            cout<<n;
            break;
        }
        if(k>length) {
            k=length-(k-length);
        }
        n--;
        length/=2;
    }
    cout<<endl;
}
int main(){
    fast();
    run(){
        int n;
        ll k;
        cin >> n >> k;
        mi(n,k);
    }   
    end 0;
}