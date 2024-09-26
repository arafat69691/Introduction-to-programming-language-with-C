// #include<stdio.h>
// char asc(char x){

//     int  n = x;
//     return n ;
// }
// int main(){
//     int k = asc('0');
//     printf("%d",k);
//     return 0;
// }



#include<stdio.h>
char small(char x){
    char t;
    if(x>'a'){
      t =x-32;
    }
return t;
}
int main(){
    int k = small('n');
    printf("%c",k);
    return 0;
}