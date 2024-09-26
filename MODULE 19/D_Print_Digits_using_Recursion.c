// #include<stdio.h>
// int fun(int a){
//     if(a==0)return;
//     int x =a%10;
//     fun(a/10);
//     printf("%d ",x);
// }
// int main(){
//     int n ;
//     scanf("%d",&n);
//    for(int i=0; i<n; i++){
//      int a ;
//     scanf("%d",&a);
//     fun(a);
//     if(a==0){
//         printf("0");
//     }
//     printf("\n");
   
//    }
//     return 0;
// }
int count(int n)
{
   if (n == 0)
   {
      return 0;
   }
   else
   {
      return 1 + count(n / 10);
   }
}
int main(){
   int k= count(123345);
   printf("%d",k);
}