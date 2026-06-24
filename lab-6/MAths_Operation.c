#include<stdio.h>
void main (){
    int a,b,n,sum=0,m=0,sub=0;
    float d=0;
    printf("press 1 to addition: \n");
    printf("press 2 to substracion: \n");
    printf("press 3 to multiplication: \n");
    printf("press 4 to divisoin: \n");
    scanf("%d",&n);
    printf("Enter value of a: \n");
    scanf("%d",&a);
    printf("Enter a value of b: \n");
    scanf("%d",&b);
    if(n==1){
        sum=a+b;
        printf("addition=%d",sum);
    }
    else if(n==2){
        sub=a-b;
        printf("substraction=%d",sub);
    }
    else if(n==3){
        m=a *  b;
        printf("multiplicatio=%d",m);
    }
    else if (n==4) {
        d=a/b;
        printf("division=%f",d);
    }
    else {
        printf("Invalid value : \n");
    }
}