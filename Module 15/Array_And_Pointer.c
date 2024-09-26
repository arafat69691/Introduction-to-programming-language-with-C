#include<stdio.h>
int main(){
    int ar[5] ={1,2,3,4,5};
   
    printf("%d\n",ar[2]);
    printf("%d\n",*(ar+2));
    printf("%d\n",2[ar]);
    printf("%d",*(2+ar));
    return 0;
}