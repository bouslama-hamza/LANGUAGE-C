#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

    int burger = 0;
    int          a;
    char     start;

    printf("********************** WELCOME TODAY *********************************\n");

    printf("\n\tPress Any Caracter To Start The Program ......\n");

    scanf("%s", &start);

    while (1){
    
    printf("You Want To Close ? (1 / 0) : ");

    scanf("%d", &a);

    if (a == 0) {

    while (1) {
    
    if (burger == 0){
      
      printf("\n.......................................................\n");
      printf("|      WAKEUP CHEF      |       SLEEP CUSTOMER        |\n");
      printf(".......................................................\n");

    for (burger = 1; burger < 10; burger++){

        printf("Chef Have [ %d ] Burger ..... Continue ? (1 / 0 ) : ",burger);
        scanf("%d", &a);

            if (a == 1){

                printf("\n.........................\n");
                printf(".     WAKEUP CUSTOMER   .\n");
                printf(".........................\n");

            }
            
            else{

                break;
            }

        printf("Custmer Buy ? (1 / 0) : ");
        scanf("%d",&a);

                if (a == 1){

                    burger =  burger - 1;
                }

                else {

                    continue;
                }
            
      }
    
    }
    else {

            
        if (burger == 10){

            printf("\n...................................................\n");
            printf("|       SLEEP CHEF      |      WAKEUP CUSTOMER     \n");
            printf("...................................................\n");
        }

     while (burger != 0){

        printf("\n[ %d ] Burger Left \n",burger);
        printf("Custmer Buy ? (1 / 0) : ");
        scanf("%d",&a);

        if (a == 1 ){

            burger =  burger - 1;
        }

        else {
                continue;
            }
         
     }
        
    }
break;

}

    }

    else {

         printf("\n************SEE YOU NEXT TIME**************\n");

         exit(1);

    }

       
}

}