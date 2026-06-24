#include<stdio.h>
void main(){
    char c;
    printf("Enter a Character: ");
    scanf("%c",&c);
    if(c>='A' && c<='Z'){
        printf("The Character is Uppercase");
    }
    else if(c>='a' && c<='z'){
        printf("The Character is Lowercase");
    }
    else{
        printf("The Character is not an Alphabet");
    }
}