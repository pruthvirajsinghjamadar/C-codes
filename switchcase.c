#include<stdio.h>
void main () {
float num1,num2,result;
char operator;
printf("enter the  num1,mum2");
scanf("%f%f",&num1,&num2);
printf("enter operator +-*%/");
    scanf("%c",&operator);
    switch (operator){
        case '+':
        result=num1+num2;
        printf("result is %f",result);
        break;
        case '-':   
        result=num1-num2;
        printf("result is %f",result);
        break;
        case '*':
        result=num1*num2;
        printf("result is %f",result);
        break;
        case '%':
        result=num1%num2;
        prinf("result is %f",result);
        break;
        case '/':
        result=num1/num2;
        printf("result is %f",result);
        break;
    
        default:
        printf("invalid");

    }

}

