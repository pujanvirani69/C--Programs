#include<stdio.h>
void main(){
    int p,r,t,i;
    printf("Enter a principle: ");
    scanf("%d",&p);
    printf("Enter a roi: ");
    scanf("%d",&r);
    printf("Enter a time: ");
    scanf("%d",&t);
    i=(p*r*t)/100;
    printf("interest =%d",i);
}