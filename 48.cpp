// 48	DSA05004	DÃY CON TĂNG DÀI NHẤT
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];int l[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        l[i]=1;    
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]&&l[j]<=l[i]){
                l[j]=l[i]+1;
            }
        }
    }
    cout<<*max_element(l,l+n);
    
    
}