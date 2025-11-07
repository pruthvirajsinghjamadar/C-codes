#include<stdio.h>
void main (){
    int hour,minutes;
    printf("enter hour and minutes");
    scanf("%d%d",&hour,&minutes);
    switch (hour+minutes){
        case 24:
        printf("swapnil choudhari sirs session");
        break;
        case 15:
        printf("yadnyesh sirs session");
        break;
        case 65:
        printf("have some water you have a short break");
        break;
        case 16:
        printf("japnees sirs session");
        break;
        case 66:
        printf("priynka patil mams session");
        break;
        case 57:
        printf("grabe some food");
        break;
        case 31:
        printf("yoga session");
        break;
        case 13:
        printf("mandakini mams session");
        break;
        default:
        printf("write a coorect timing");
        
    }
}