#include<stdio.h>
void main(){
    int box,i,n;
    printf("enter the value according your condition\n1.increament 2.decreament 3.even 4.odd");
    scanf("%d",&box);
     printf("enter value of n");
     scanf("%d",&n);
    switch (box) {
    case 1:
        for(i=1;i<=n ;i++){
            printf("%d",i);
        }
    break;
        case 2:
        for(i=n;i>=1;i--){
            printf("%d",i);
        }
    break;
        case 3:
        for(i=1;i<=n ;i++){
            if(i%2==0){
            printf("%d",i);
             }
        }
        break;
        case 4:
        for(i=1;i<=n ;i++){
            if(i%2==1){
            printf("%d",i);
             }
        }
        break;
        
    }    
    
        
}