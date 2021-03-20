#include<stdio.h>
#include<string.h>

                    // declaration of fonctione (calculation number of caractere) //

    int number(char *point){
        
        int i;  // for flopos //

            for (i = 0; *point != '\0'; i++){

            point++;

            }
                                  //  fonction return //
        return i;
        
    }

                    // declaration of fonctione (change to ASSCI and Calulation ) //

    int  ASSCI(char *point, int N){

        int  M=0;   //  fonction return  //

                                 // change to code ASSCI //

            printf("\n***********************************\n");

            for( point ; *point != '\0' ; point++){
            
                printf("%c       =      %d\n",*point,*point);
                M   += *(point);

            }

                                 // fonction return //

    return M; 
    
    }
                                  // fonction main //

    int main(){

        char        *nam;        //       pointure      //
        int          M,N;        // number of caractere //
        char change[100];        //    exchange table   //

        printf("\n***********************************\n");

            printf("Please write your name : ");
            scanf("%s",change);

                                       // exchange //

        nam = change;

                                     // fonction Call //

                N =   number(nam);
                M = ASSCI(nam, N);

                                       // final result //

        printf("\n***********************************\n");

            printf("Number of caractere : %d\n",N);
            printf("Final Result : %d\n",M);

        printf("\n***********************************\n");

    }