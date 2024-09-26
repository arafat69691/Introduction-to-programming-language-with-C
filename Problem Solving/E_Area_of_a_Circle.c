#include<stdio.h>
#include<math.h>
int main(){
    float a;
    scanf("%f",&a);
    float area = 2* M_PI*a;
    printf("%0.9f",area);
    return 0;
}