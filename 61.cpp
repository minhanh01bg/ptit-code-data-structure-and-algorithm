	// 61	DSA06004	HỢP VÀ GIAO CỦA HAI DÃY SỐ 1
#include<bits/stdc++.h>
using namespace std;
void printUnion(int arr1[], int arr2[], int n1, int n2)
{
    set<int> hs;
 
    for (int i = 0; i < n1; i++)
        hs.insert(arr1[i]);
 
    for (int i = 0; i < n2; i++)
        hs.insert(arr2[i]);
 
    for (auto it = hs.begin(); it != hs.end(); it++)
        cout << *it << " ";
    cout << endl;
}
void printIntersection(int arr1[], int arr2[], int n1,int n2)
{
    set<int> hs;
 
    for (int i = 0; i < n1; i++)
        hs.insert(arr1[i]);
 
    for (int i = 0; i < n2; i++)
 
        if (hs.find(arr2[i]) != hs.end())
            cout << arr2[i] << " ";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i = 0;i < n; i++) cin >> a[i];
        for(int i = 0;i < m; i++) cin >> b[i];
        printUnion(a, b, n, m);
        printIntersection(a, b, n, m);
        cout<<endl;
    }
}
//     #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         // set_union<int>c;
//         // set_intersection<int>d;
//         int a[n],b[m];
//         for(int i=0;i<n;i++)
//             cin>>a[i];
//         for(int i=0;i<m;i++) 
//             cin>>b[i];
//         vector<int>c(n+m),d(n+m);
        
//         vector<int>::iterator it = set_union(a,a+n,b,b+m,c.begin());
//         for(vector<int>::iterator i=c.begin();i!=it;i++){
//             cout<<*i<<" ";
//         }
//         cout<<endl;
//         vector<int>::iterator it2= set_intersection(a,a+n,b,b+m,d.begin());
//         for(vector<int>::iterator i=d.begin();i != it2;i++){
//             cout<<*i<<" ";
//         }
//         cout<<endl;
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         set<int>c;
//         int a[n],b[m];
//         for(int i=0;i<n;i++) {
//             cin>>a[i];
//             c.insert(a[i]);
//         }
//         for(int i=0;i<m;i++) {
//             cin>>b[i];
//             c.insert(b[i]);
//         }
//         for(auto i:c) cout<<i<<" ";
//         cout<<endl;
//         int d=max(n,m);
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++)
//                 if(a[i]==b[j]) {
//                     cout<<a[i]<<" ";
//                     break;
//                 }
//         }
//         cout<<endl;
//     }
// }