#include<stdio.h> //PASSED
int main(){
    int a,b,c,d,e,f;
    scanf("%d %d %d",&a,&b,&c);
    if(a<c && a<b){
        
        printf("%d ",a);
    }
    else if(b<c && b<c){
        
        printf("%d ",b);
    }
   else {
        
        printf("%d ",c);
    }

    if(a>c && a>b){

        printf("%d",a);
    }
    else if(b>c&& b>c){
    
        printf("%d",b);
    }
   else {

        printf("%d",c);
    }

    return 0;
}