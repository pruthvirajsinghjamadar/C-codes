#include<stdio.h>
int main(){
    int hour,minutes,add;
    printf("enter value of the hour");
   scanf("%d",&hour);
    add=hour;
    if (add>=9&&add<10 )
    {
        printf("you have math session");
    }
    else if(add>=10&&add<11){
        printf("you have cp session");
    }
    else if (add>=11&&add<12){
        printf("you have bxe sessoin");
    }
    else if(add>=12&&add<13){
        printf("yoga se hoga so you have youga session");
    }else if (add>=13&&add<14){
        printf("you have alunch break");
    }else if(add>=14&&add<17){
    printf("you have an a coding club session");
    }
    return 0;
    }
    
    
