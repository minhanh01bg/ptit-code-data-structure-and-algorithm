	// 91	DSA08005	SỐ NHỊ PHÂN TỪ 1 ĐẾN N
    #include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            int x=0,binary[1000],k=i;
            while(k>0){
                binary[x]=k%2;
                k/=2;
                x++;
            }
            for(int j=x-1;j>=0;j--) cout<<binary[j];
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int a[100],n,stop=1;
// bool k(int a[],int n){
//     int sum=0,z=0;
//     for(int i=n;i>=1;i--){
//         if(a[i]==1) sum+=pow(2,z);
//         z++;
//     }
//     if(sum==n) return true;
//     else return false;
// }
// void res(){
//     int x=0;
//     for(int i=1;i<=n;i++){
//         if(a[i]==1) {
//             x=i;
//             break;
//         }
//     }
//     if(x!=0){
//         for(int i=x;i<=n;i++){
//             cout<<a[i];
//         }
//         cout<<" ";
//     }
//     if(k(a,n)==1) stop=0;
// }
// void Try(int i){
//     for(int j=0;j<=1;j++){
//         a[i]=j;
//         if(i==n&&stop==1) res();
//         else if(stop==0) break;
//         else Try(i+1);
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         stop=1;
//         Try(1);
//         cout<<endl;
//     }
// }