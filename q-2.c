#include<stdio.h>

int main(){

    int a,b;

    printf("\n\nmultiplication table");
    printf("\n\nInput Your number:- ");
    scanf("%d",&a);

    for(b=1 ; b<=10 ; b++){
        printf("\n%d * %d = %d\n\n", a, b, a * b);
    }
    return 0;
}