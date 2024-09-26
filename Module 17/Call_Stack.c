#include<stdio.h>
void a(){
    printf("Print kortesi a\n");
    printf("a END\n");
}
void h(){
    printf("YEASIN\n");
    a();
}
void n(){
    printf("ARAFAT\n");
    h();
    printf("ARAFAT 2\n");
}
int main(){
    printf("LAST\n");
    n();
    return 0;
}
//last
//ARAFAT
//YEASIN
//Print kortesi a
//a END
//ARAFAT 2
   