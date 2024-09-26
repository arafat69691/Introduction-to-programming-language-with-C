#include<stdio.h>
int main(){
    long long int w;
    scanf("%d",&w);
    for(int j =0 ;j<w ;j++){
   long long int n,a,b,c;
    scanf("%lld %lld %lld %lld",&n,&a,&b,&c);
    long long int x =(a*b*c);
    long long int mul=n/x;
    long long int sum=a*b*c*mul;
    if(sum==n){
        
    printf("%d\n",mul);
    }
    else{
        printf("-1\n");
    }
   
    }
    return 0;
}