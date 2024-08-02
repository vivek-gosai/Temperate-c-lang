#include<stdio.h>

int main(){

    int a,b=1;

    printf("\n\nEnter a number:- ");
    scanf("%d", &a);

    for(int i=1; i<=a; i++){

        b = b*i; 

    }
    printf("Factorial number :- %d\n\n", b);

    return 0;
}