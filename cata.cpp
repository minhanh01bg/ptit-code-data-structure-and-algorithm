#include<bits/stdc++.h>

using namespace std;
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define run() int t;cin>>t;while(t--)
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long 
#define endl "\n"
int B[1001][1001];
bool ok[1001];
int u,n,m;int BB[1001],kkkk=0;
int truoc[1001];
void DFS(int i){
	ok[i]=true;
	for(int v=1;v<=u;v++){
		if(B[i][v]==1 && ok[v]==false){
			truoc[v]=i;DFS(v);
		}
	}
}
void init(){
	kkkk=0;
	for(int i=1;i<=u;i++) 
		truoc[i]=0;
	
	for(int i=1;i<=u;i++) 
		ok[i]=false;
}

void duongdi(){
	if(truoc[m]==0) {
		cout<<"no path";
		return;
	}
	int j=m;
	BB[kkkk++]=j;
	while(truoc[j]!=n){
		BB[kkkk++]=truoc[j];
		j=truoc[j];
	}
	BB[kkkk]=n;
    cout<<"DFS path: ";
	for(int i=0;i<=kkkk;i++) cout<<BB[i]<<" ";
}
void BFS(int i){
    queue<int> hd;
    // cout<<u<<" ";
    ok[i]=true;
    hd.push(i);
    while(!hd.empty()){
        int s = hd.front();
        hd.pop();
        for(int v=1;v<=u;v++){
            if(B[s][v]==1&&ok[v]==false){

				truoc[v]=s;
                ok[v] =	true;
                hd.push(v);
            }
        }
    }
}
void duongd(){
	if(truoc[m]==0) {
		cout<<"no path";
		return;
	}
	int j=m;
	BB[kkkk++]=j;
	while(truoc[j]!=n){
		BB[kkkk++]=truoc[j];
		j=truoc[j];
	}
	BB[kkkk]=n;
    cout<<"BFS path: ";
	for(int i=0;i<=kkkk;i++) cout<<BB[i]<<" ";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>u>>n>>m;
    FOR(i,1,u)
        FOR(j,1,u)
            cin>>B[i][j];
    DFS(n);
    duongdi();
    cout<<"\n";
    init();
    BFS(n);
    duongd();
    cout<<endl; 
}