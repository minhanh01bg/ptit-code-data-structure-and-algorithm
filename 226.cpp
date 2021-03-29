// 226	DSA01018	TẬP CON LIỀN KỀ PHÍA TRƯỚC
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int amount, n, k, arr[1001];
    cin>>amount;
    while (amount-- > 0){
        cin>>n>>k;
        int index = -1;
        for (int i = 0; i < k; i++)
            cin>>arr[i];

        for (int i = k - 1; i >= 0; i--)
            if (arr[i] - 1 > arr[i - 1])
            {
                arr[i]--;
                index = i;
                break;
            }
        int x=0;
        for(int i=0;i<k;i++){
            if(arr[i]!=i+1){
                x=1;
            }
        }
        if(index!=-1&&x==1)
        for (int j = k - 1; j > index; j--)
            arr[j] = n--;
        else if(x==1&&index==-1){
            arr[0]--;
            for(int i=k-1;i>0;i--){
                arr[i]=n--;
            }
        }
        else if(x==0){
            for(int i=k-1;i>=0;i--){
                arr[i]=n--;
            }
        }
        // cout<<x;
        for (int i = 0; i < k; i++)
            cout<<arr[i]<<" ";
        cout<<"\n";
    }
    return 0;
}