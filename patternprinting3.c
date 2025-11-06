#include<stdio.h>
void main(){
    int i,j,row;
    int num =1;
    printf("enter the row ");
    scanf("%d",row);;
    for(i=1; i<=row;i++){
            for(j=1;j<=i;j++){
                printf("%d",num);
            }
    }
}