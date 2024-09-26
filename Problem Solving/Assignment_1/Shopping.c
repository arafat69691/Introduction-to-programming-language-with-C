#include<stdio.h>
int main(){
    int n,c;
    scanf("%d",&n);
    if(n>1000){
        printf("I will buy Punjabi\n");
        c=n-1000;
        if(c>=500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else{
        printf("Bad luck!");
    }
}