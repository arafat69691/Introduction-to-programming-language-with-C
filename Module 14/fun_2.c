 #include<stdio.h>
 int num(){
    int a , b;
    scanf("%d %d",&a,&b);
    int n=a+b;
    return n;
 }
 int main(){
     int a = num(100);
     printf("%d",a);
     return 0;
 }