// 199	DSA05021	CẶP SỐ
#include <bits/stdc++.h> 
using namespace std; 
  
// Structure val 
struct val  
{ 
    int first; 
    int second; 
}; 
  
map<pair<int, int>, int> m; 
  
// Memoisation function 
int findMaxChainLen(struct val p[], int n, int prev, int pos) { 
      
    if (m.find({ pos, prev }) != m.end())  { 
        return m[{ pos, prev }]; 
    } 
  
    if (pos >= n) 
        return 0; 

    if (p[pos].first <= prev)  { 
        return findMaxChainLen(p, n, prev,  
                                 pos + 1); 
    } 
  
    else { 
        int ans = max(findMaxChainLen(p, n,  
                             p[pos].second, 0) + 1, 
                      findMaxChainLen(p, n,  
                                   prev, pos + 1)); 
        m[{ pos, prev }] = ans; 
        return ans; 
    } 
} 
int maxChainLen(struct val p[], int n) { 
    m.clear(); 

    int ans = findMaxChainLen(p, n, 0, 0); 
    return ans; 
} 
int main() { 
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n; 
        val p[n]; 
        for(int i = 0;i < n; i++){
            cin >> p[i].first >> p[i].second;
        }
        cout << maxChainLen(p, n) << endl; 
    }
    
    return 0; 
}