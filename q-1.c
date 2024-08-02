#include<stdio.h>
int main(){

    char a;

    a='a';
    do{
        printf("\nAlphabets from a to z:- %c\n\n", a);
        a++;

    }while(a <= 'z');

    return 0;

}