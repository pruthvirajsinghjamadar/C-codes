#include<stdio.h>
void mian(){
    int price,money,balance,amount;
    int choice;

    printf("vending mascachine");
    printf(" coke========40\n");
    printf("pepsi=========40\n");
    printf("fanta=========15\n");
    printf("mirinda=======15\n");
    printf("smooth========20\n");

    printf("enter your coice:");
    scanf("%d",&choice);

    if(choice==1){
        price=40;
    }
    else  if(choice==2){
        price=40;
    }else if(choice==3){
    price==15;    
    }
    else if(choice==4){
    price==15;    
    }
    else if(choice==5){
    price==20;    
    }



    printf("enter amount:");
    scanf("%d",&amount);



    if (amount<price){
        printf("dispose the product thank you");
    }else if(amount<price){ 
        printf("not enouh money please enter %d",price-amount);   
    }else {
        printf("your change %d",amount-price);
    }
    
}  