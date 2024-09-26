#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);//4
    int b[a];
    for (int  i = 0; i <a; i++)//0 1 2 3
    {
         scanf("%d",&b[i]);
        
    }
    for(int i = a-1 ; i>=0 ;i--){ 

      if(i%2 !=0){
         printf("%d ",b[i]);
      }

    }
    
    return 0;
}
