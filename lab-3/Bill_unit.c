#include<stdio.h>
void main(){
    float unit,v;
    printf("Enter a used Units: ");
    scanf("%f",&unit);
    if(unit<=50){
        v=unit*0.50;
    }
    else if(unit<=150){
        v=50*0.50+(unit-50)*0.75;
    }
    else if(unit<=250){
        v=(unit-150)*1.2+100*0.75+50*0.50;
    }
    else{
        v=50*0.50+100*0.75+100*1.2+(unit-250)*1.5;
    }
    printf("bill =%f ",v);
    v=v*20/100+v;
    printf("After = %f",v);
}