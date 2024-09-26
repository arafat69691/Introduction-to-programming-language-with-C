#include<stdio.h>
int main(){
    int i ;
    int sum = 0;
  int a ,b ;
  a=1,b=6;

  scanf(" %d",&a);
  if(a <=1 )
  {
    for ( i = 0; i<= b; i+=2)
    {
        sum+=i;
    }
    printf("%d",sum); 
  
  }
  else{
    printf("Incorrerct");
  }
  
}
