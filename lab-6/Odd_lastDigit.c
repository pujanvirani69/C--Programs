#include<stdio.h>
void main(){
    int i,temp;
    printf("Enter a Number : ");
    scanf("%d",&i);
    temp=i%10;
    if(temp%2==0){
        printf("The Last Digit of %d is Even",i);
    }
    else{
        printf("The Last Digit of %d is Odd",i);
    }
}