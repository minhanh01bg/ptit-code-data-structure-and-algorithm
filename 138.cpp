	// 138	DSA04009	LŨY THỪA MA TRẬN 1
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;  

long long u =1e9 +7, k; int n;
int MOD=1e9+7;
int DIM;
struct matrix{
	ll a[11][11];
};
matrix operator*(matrix A, matrix B) {
    matrix C;
    for(int i=0;i<DIM;i++)
        for(int j=0;j<DIM;j++)  {
            C.a[i][j] = 0;
            for(int t=0;t<DIM;t++)
                C.a[i][j] = (C.a[i][j] + (A.a[i][t] * B.a[t][j])%MOD) %MOD;
        }
    return C;
}
matrix pow_matrix(matrix a, int n) {
    if (n == 1) return a;
    matrix b = pow_matrix(a, n / 2);
    if (n & 1) return b * b * a;
    return b*b;
}
int main(){
	int t;
	cin >> t;
    int k;
	while(t--){
		cin >> DIM >> k;
		matrix x, y;

        for(int i=0;i<DIM;i++){
            for(int j=0;j<DIM;j++){
                cin>>x.a[i][j];
            }
        }
        y=pow_matrix(x,k);

        for(int i=0;i<DIM;i++){
            for(int j=0;j<DIM;j++){
                cout<<y.a[i][j]<<" ";
            }
            cout<<"\n";
        }
    }	
	return 0;
}
// #include <bits/stdc++.h> 
// using namespace std;
// #define mo 1000000007
// int n;
// long long a[10][10],A[10][10];
// long long k;

// void mul(long long a[10][10],long long b[10][10]){
// 	long long c[10][10];
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			c[i][j]=0;
// 			for(int k=0;k<n;k++){
// 				c[i][j]+=((a[i][k]%mo)*(b[k][j])%mo)%mo;
// 			} 
// 			c[i][j]%=mo;
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			a[i][j]=c[i][j];
// 		} 
// 	}		
// }

// void pow(long long a[10][10], long long n){	
// 	if(n<2) return;
//     pow(a, n/2);
//     mul(a,a);
// 	if(n%2==1) mul(a,A);
// }

// int main(){
//     ios_base::sync_with_stdio(0); cin.tie(0);
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		cin>>n>>k;
// 		for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cin>>a[i][j];
//                 A[i][j]=a[i][j];
//             }
//         }
//         pow(a,k);
// 		for(int i=0;i<n;i++){
// 			for(int j=0;j<n;j++){
//             	cout<<a[i][j]<<" ";
//         	}
// 			cout<<endl;
// 		}	
// 		cout<<endl;
// 	}
// 	return 0;
// }
/*
1
5 2
0 1 0 1 1
1 0 1 0 1
0 1 0 1 1
1 0 1 0 1
1 1 1 1 0
*/
/*
2
2 5
1 1
1 0
3 1000000000
1 2 3
4 5 6
7 8 9
*/