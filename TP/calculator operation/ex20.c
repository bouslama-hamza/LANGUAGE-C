#include<stdio.h>
int main(){
    char opt ;
    printf("donnez  un operation :");
    scanf("%c",&opt);
    switch (opt)
    {
    case '+': {printf("Addition\n");}break;
    case '-': {printf("Sustraction\n");}break;
    case '*': {printf("Multiplication\n");}break;
    case '/': {printf("Division\n");}break;
    case '%': {printf("Modulo\n");}break;
    case '^': {printf("Puissance\n");}break;
    default : {printf("invalid\n");}break;
    }
}