#include<stdio.h>
void main(){
    int base,height;
    float area;
    printf("Enter a base: ");
    scanf("%d",&base);
    printf("Enter a height: ");
    scanf("%d",&height);
    area=(base*height)/2;
    printf("%f",area);
}