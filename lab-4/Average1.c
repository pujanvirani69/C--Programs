#include<stdio.h>
void main(){
    int a,b,c;
    double avg;
    printf("Enter a value  of a&b&c: ");
    scanf("%d %d %d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("avg= %f",avg);
}