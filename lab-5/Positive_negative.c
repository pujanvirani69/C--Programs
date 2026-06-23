#include<stdio.h>
void main(){
    int a;
    printf("Enter a no.: ");
    scanf("%d",&a);
    if(a>=0){
        printf("Positive value");
    }
    else{
        printf("Negative value");
    }
}