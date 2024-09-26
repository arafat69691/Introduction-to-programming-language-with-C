#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i = 0 ; i<m ; i++){
        scanf("%d",&b[i]);
    }
//   for(int i =0 ; i<m ; i++){
//       printf("%d",b[i]);
//   }

    int c [n+m];
    int p=n;
    for(int i = 0; i<n ; i++){
        c[i]= a[i];
         c[p]=b[i];
        p++;
    }
    // int p = n;
    // for(int i = 0 ; i<m ; i++){
    //     c[p]=b[i];
    //     p++;
    // }
    for(int i=0 ; i<n+m ; i++){
        printf("%d ",c[i]);
    }
    return 0;
}