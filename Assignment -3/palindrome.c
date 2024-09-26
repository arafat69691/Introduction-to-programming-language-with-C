#include<stdio.h>
#include<string.h>

int is_palindrome(char ar[],int n){
   
    for (int i = 0 ; i<n/2 ; i++){//2
        if(ar[i]==ar[n-i-1]){// mm
           
            return 1 ;
        }

    }
    return 0;
}
int main(){
    char ar[10001]; 

    scanf("%s",&ar);

    int n=strlen(ar);
    int t=is_palindrome(ar,n);//5
    if(t==1){
        printf("palindrome");
    }
    else{
        printf("Not pallindrome");
    }

    return 0;
}