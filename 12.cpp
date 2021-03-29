//12	DSA01002	TẬP CON KẾ TIẾP
#include <stdio.h>
 
int n, k;
int th[11];
 
void khoitao () {
    for (int i=1; i<=k; i++)
        scanf("%d",&th[i]);
    
}
 
void in () {
    for (int i=1; i<=k; i++) {
        printf ("%d ", th[i]);
    }
}
 
int dung=0;
void sinhth () {
    int i=k;
    while (i>0 && th[i]==n-k+i) i--;
    if (i>0) {
        th[i]++;
        for (int j=i+1; j<=k; j++) {
            th[j]=th[i]+j-i;
        }
    } else dung=1;
}
 
int main () {
    int t;
    scanf("%d",&t);
    while(t--){
        scanf ("%d%d", &n, &k);
        khoitao();
         
        sinhth ();
        if(dung ==0)
            in ();
        
        else {
            for(int i=0;i<k;i++){
                printf("%d ",i+1);
            }
        }
        printf("\n");
    }   
    return 0;
}