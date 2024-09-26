#include<stdio.h>
void odd_even(){
     int n;
    scanf("%d",&n);
    int ar[n];
    int cnt=0,pnt=0;
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&ar[i]);
    }
    for(int i = 0 ; i<n ; i++){
       
        if (ar[i]%2==1 ){
            cnt++;
        }
        else {
            pnt++;
        }
    }
    printf("%d %d",pnt,cnt);

}
int main(){
   
    odd_even();
  
    return 0;
}