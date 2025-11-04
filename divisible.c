#include <stdio.h>

void main() {
    int num  ;
    printf("Enter num: ");
    scanf("%d", &num);
    if(num%5&&num%11){
        printf("number is divisible");
    }else{
        printf("number is not divisible by 5 and 11");
    }


}





#include <stdio.h>

void main() {
    int num  ;

    printf("Enter num1: ");
    scanf("%d", &num);
    if(num>0){
        printf("number is positive");
    }else if(num<0){
        printf("nmber is negative");
    }else{
        printf("number is equal");
    }


}