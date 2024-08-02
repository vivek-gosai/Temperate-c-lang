#include<stdio.h>


int main(){

    int num,last,first;


    printf("\n\nEnter a number:- ");
    scanf("%d", &num);

    printf("\nYour number firstdigit & lastdigit sum:- %d", num);

    printf("\n\nLastdigit:- %d", num%10);

    last=num%10;

    while(num>10){

        num=num/10; 

    }
    printf("\nfirst digit:- %d\n", num);

    first=num;

    printf("firstdigit & lastdigit sum:- %d\n\n", last+first);

    return 0;
}