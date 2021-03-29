// 104	CTDL_002	Tổng dãy con = K
#include<bits/stdc++.h>
using namespace std;//Tổng dãy con = K
int b[100],a[100],n,m=0,k;
int kk=0;
bool stop=true;
void res(){
    int sum=0;
    for(int i=0;i<n;i++){
        if(b[i]==0) sum+=a[i]; 
    }
    if(sum == k) {
        int c[100],x=0;
        for(int i=0;i < n;i++){
            if(b[i]==0) {
                cout<<a[i]<<" ";
            }
        }
		kk++;
        cout<<endl;
    }
}
void Try(int i){
    for(int j=1;j>=0;j--){
        b[i]=j;
        if(i==n-1) res();
        else Try(i+1);
    }
}
int main(){
	cin>>n>>k;
	m=0;
	stop=true;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	Try(0);
	cout<<kk;
	cout<<endl;
}