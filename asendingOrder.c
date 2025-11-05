#include <stdio.h>

int main() {
    int a,b,c;


    printf("Enter the 3 num ");
    scanf("%d%d%d", &a,&b,&c);
    if (a>b&&a>c){
            if(b>c){
                printf("umber are in this order%d%d%d",a,b,c);
            }   
                else{
                printf("umber are in this order%d%d%d",a,c,b);
                }
    }else if (b>a&&b>c){
            if(a>c){
                printf("umber are in this order%d%d%d",b,a,c);
            }else {
                printf("umber are in this order%d%d%d",b,c,a);
            }
    }else if (c>a&&c>b){
            if(a>b){
                printf("umber are in this order%d%d%d",c,a,b);
            }else {
                printf("umber are in this order%d%d%d",c,b,a);
            }
            }else {
        printf("they may be equal");
    }
    }



    
