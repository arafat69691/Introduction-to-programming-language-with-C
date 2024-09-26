#include<stdio.h>
int main(){
    int s,w;
    scanf("%d",&s);
    for(int i = 1 ; i<=s ; i++){
        int f1,f2,a,x,m;//10 5 15
        scanf("%d %d %d",&f1,&f2,&a);
        // printf("%d %d %d ",f1,f2,a);
        x=(f1*a)/(f1+f2);
        m=a-x;
        printf("%d\n",m);
    }
    return 0;
}
