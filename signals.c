#include<stdio.h>

void main (){
    char colour;
    
        printf("colour of signal");
        scanf("%c",&colour);

    switch(colour){
        case 'r':
            printf("stop");
        break;
        case 'y':
        
            printf("get ready to go");
        break;
        case 'g':
            printf("you can go");
        break;
        default:
            printf("invalid input");
            
    }
}