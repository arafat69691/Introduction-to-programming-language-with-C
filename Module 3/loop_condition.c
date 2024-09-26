#include<stdio.h>
int main(){
    int i ;
    int el=4;
   scanf("%d",&el);
    if (el>1)
    {
      for(i=1 ; i<=el ; i++){
        if(i%2==0){ 
            printf("%d - Even\n",i);
        }
        else{  
            printf("%d - Odd\n",i);
        
        }
    }
    }
    else{
        printf("Givr  big value");
    }
    
}