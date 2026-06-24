#include<stdio.h>
void main(){
    int s1,s2,s3,s4,s5;
    float total,persentage;
    printf("Enter the marks of 5 subjects: ");  
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;       
    persentage=(total/500)*100;
    printf("Percentage of the student is: %.2f",persentage);
    if(persentage<35){
        printf("\nThe Student is Fail");
    }
    else if(persentage>=35 && persentage<45){
        printf("\nThe Student is Pass");
    }
    else if(persentage>=45 && persentage<60){
        printf("\nThe Student is Second Class");
    }
    else if(persentage>=60 && persentage<70){
        printf("\nThe Student is First Class");
    }
    else{
        printf("\nThe Student is Distinction");
    }
}