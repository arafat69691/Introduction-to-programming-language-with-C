#include<stdio.h>
int main(){
    int a ;
    scanf("%d",&a);
    int c[a];
    for(int i = 0; i<=a-1; i++){
        scanf("%d",&c[i]);
    }
    int add=0, min=0;
    for(int i = 0 ; i<=a-1 ; i++){
        if(c[i]>0)
        {
            add =add+c[i];
        }
        if(c[i]<0)
        {
            min +=c[i];
        }
       
    }
     printf("%d %d",add,min);
    return 0;
}