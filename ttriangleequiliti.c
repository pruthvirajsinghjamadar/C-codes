#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c){
        printf("tringle is equlataral");
    }else if (a==b||b==c||a==c){
        printf("triangle  is equlateral");
    else{
        printf("scalar triangle");
    }