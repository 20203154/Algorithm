#include <stdio.h>

int main (){
    int a=0;
    int b=0;
    scanf("%d",&a);
    for(int i=0;a!=0;i++){
       if((a%3)==0){
        a=a/3;
        b++;
       }
       if((a%2)==0){
        a=a/2;
        b++;
       }
       else{
        a--;
       } 
    }
    printf("%d",b);
    return 0;
}
