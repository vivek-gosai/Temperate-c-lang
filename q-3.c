#include<stdio.h>


int main(){
    int a,b=0;

    printf("\n\nEnter a number:- ");
    scanf("%d",&a);

    while(a>0){

        a=a/10;
        b++;

    }
    printf("total digits:- %d\n\n",b);

    return 0;
}