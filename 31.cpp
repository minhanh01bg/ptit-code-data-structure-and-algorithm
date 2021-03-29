// 31	DSA03005	CHIA MẢNG THÀNH HAI MẢNG CON CÓ TỔNG LỚN NHẤT
#include<bits/stdc++.h>
using namespace std;
// int maxDifference(int arr[], int N, int k) 
// { 
//     int M, S = 0, S1 = 0, max_difference = 0; 
  
//     // Sum of the array 
//     for (int i = 0; i < N; i++) 
//         S += arr[i]; 
//     sort(arr, arr + N, greater<int>()); 
//     M = max(k, N - k); 
//     for (int i = 0; i < M; i++) 
//         S1 += arr[i]; 
  
//     max_difference = S1 - (S - S1); 
//     return max_difference; 
// } 
  
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n,greater<int>());
        long long sum=0,SUm=0;
        int M=max(n-m,m);
        for(int i=0;i<M;i++) sum+=a[i];
        for(int i=M;i<n;i++) SUm+=a[i];
        cout<<sum-SUm<<endl;
        // for(int i=0;i<n;i++) cout<<a[i]<<' ';
        // cout<<maxDifference(a,n,m)<<endl;
    }
}