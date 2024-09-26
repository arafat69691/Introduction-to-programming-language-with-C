#include<stdio.h>
#include<string.h>
int main(){
    int s;
    scanf("%d",&s);
    for(int j = 0 ; j<s ; j++){
    int a;
    scanf("%d",&a);
    char n [a];
    scanf("%s",&n);
    int cnt =0 , pnt=0; ;
    
    for(int i = 0 ; i<strlen(n);i++){
        if(n[i]=='T'){
        cnt++;
        }
        else{
            pnt++;
        }

    }
  if(cnt>pnt){
    printf("Tiger\n");
  }
  else if(cnt<pnt){
    printf("Pathaan\n");
  }
    else{
        printf("Draw\n");
    }
    }
    return 0;
}