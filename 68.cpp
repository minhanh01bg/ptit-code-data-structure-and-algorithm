// 68	DSA06011	TỔNG GẦN 0 NHẤT
#include<bits/stdc++.h>
using namespace std;
void minAbsSumPair(int arr[], int arr_size){
    int inv_count = 0;
    int l, r, min_sum, sum, min_l, min_r;
     
    if(arr_size < 2){
        cout << "Invalid Input";
        return;
    }
    
    min_l = 0;
    min_r = 1;
    min_sum = arr[0] + arr[1];
     
    for(l = 0; l < arr_size - 1; l++){
        for(r = l + 1; r < arr_size; r++){
            sum = arr[l] + arr[r];
            if(abs(min_sum) > abs(sum)){
                min_sum = sum;
                min_l = l;
                min_r = r;
            }
        }
    }
     
    cout<<min_sum<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        // cout<<mi(a,n)<<endl;
        minAbsSumPair(a,n);
    }
}