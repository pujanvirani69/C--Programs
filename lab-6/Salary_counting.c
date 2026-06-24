#include<stdio.h>
void main(){
    int s=0;
    int hra,da,gross,ts;
    printf("Enter employee salary: \n");
    scanf("%d",&s);
    if(10000>=s){
        hra=s*0.2;
        da=s*0.8;
        gross=hra+da;
        ts=s+gross;
        printf("gross salary=%d\n",gross);
        printf("Total salary is =%d",ts);
    }
    else if(20000>=s){
        hra=s*0.25;
        da=s*0.9;
        gross=hra+da;
        ts=s+gross;
        printf("gross salary=%d\n",gross);
        printf("Total salary is =%d",ts);
    }
    else if(30000>=s){
        hra=s*0.3;
        da=s*0.95;
        gross=hra+da;
        ts=s+gross;
        printf("gross salary=%d\n",gross);
        printf("Total salary is =%d",ts);
    }
    else{
    printf("Envalid value: ");
}
}