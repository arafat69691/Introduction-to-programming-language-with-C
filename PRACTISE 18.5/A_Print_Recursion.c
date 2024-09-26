#include<stdio.h>
void fun(int n,int i){
    if(n==i-1)return;
  
     printf("I love Recursion\n");

   
   fun(n,i+1);
}
int main(){
    int n ;
    scanf("%d",&n);
    fun(n,1);
    return 0;
}