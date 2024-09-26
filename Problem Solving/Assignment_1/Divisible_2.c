#include<stdio.h>
int main(){
   long long int o ;
    scanf("%lld",&o);
    
        for(long long int i=21; i<=o; i++){
            if(i%3==0 && i%7==0){
                printf("%lld\n",i);
            }
           
        }
       
    
}