//leap year or not.
#include<stdio.h>
int main (){
    int year;
    printf("enter a year\n");
    scanf("%d", &year);
    if(year%400==0){
        printf("the year is leap year\n");
    }
    else if(year%100!=0 && year%4==0){
        printf("the year is leap year\n");
    }
    else{
        printf("the year is not leap year\n");
    }
}
