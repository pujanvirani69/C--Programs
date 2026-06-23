#include<stdio.h>
void main(){
    char c;
    printf("Enter a Charactetr: ");
    scanf("%c",&c);
    if(c=='A' || c=='a' || c=='E' || c=='e' || c=='I' || c=='i' || c=='O' || c=='o' || c=='U' || c=='u'){
        printf("The Character is Vowel");
    }
    else{
        printf("The Character is Consonant");
    }
}