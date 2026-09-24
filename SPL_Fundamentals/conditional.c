#include <stdio.h>

int main(){
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);
    if(number > 0){
        printf("the number is positive\n");
    } else if(number < 0){
        printf("the number is negative\n");
    } else {
        printf("the number is zero\n");
    }
}