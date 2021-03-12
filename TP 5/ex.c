#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
                              // Declaration de structure //
    struct point {

        char          name[10];
        char          Prenom[10];
        float         note;
        struct point *next;

    };typedef struct point Point;

                        // changer deux chaine de caractere //

                char change(char T1[],char T2[]){
                    char NM[10];
                        for (int i = 0; i < 9; i++){

                            NM[i] = T1[i];
                            T1[i] = T2[i];
                            T2[i] = NM[i];

                        }
                }
                        // fonction supprimer un element de tableaux //

                void supprimer(Point **debut , float not){
                    Point *temp=*debut;
                    if (temp){
                        if(temp->note == not){
                            *debut = temp -> next;
                        }
                        else{
                            while (temp->next){
                                if(temp->next->note != not){
                                    temp = temp->next;
                                    }
                                else{
                                    temp->next = temp->next->next;
                                    }
                                }
                            }
                        }
                    }

                                // Trie un tableaux //
                                
    Point * Trie(Point *debut){

                Point   *temp;  //    Depart    // 
                Point   *p;     //   selection  //
                int      PR;    // pour Exchange//
                
                if (debut != NULL){
                    for (temp = debut; temp->next != NULL ; temp = temp->next){
                        for ( p = temp->next; p != NULL; p = p-> next){
                            if (p->note > temp->note){
                            
                                PR          = p->note;
                                p->note     = temp->note;
                                temp->note  = PR;

                                // changer les nome //

                                change(p->name,temp->name);
                                change(p->Prenom,temp->Prenom);
                            }
                        }
                    }
                }
            }

                                    // Fonction main //
        int main(){
            
            FILE *fp ;
            fp = fopen("Fist Try.txt","a");

            int     n;          //  nombre d'etudiant //
            Point  *start;      //        debut       //
            Point  *head;       //   tete de liste    //
            Point  *T;          // pointure de tableau//
            Point  *c;          //    pour affichage  //
            float   a;          //  pour la supprimer //
            char    ans[10];    //      le choix      // 
                
            while (1){
                    
            printf("\n*******************************************************************************\n");

            printf("||==============||==============||================||==============||============||\n");
            printf("||    AJOUTER:  ||   SUPPRIMER: ||    AFFICHER:   ||     TRIER :  ||   SORTIE:  ||\n");
            printf("||==============||==============||================||==============||============||\n");

            scanf("%s",ans);

                                    // Ajouter un nouveau element //

            if (strcmp(ans,"AJOUTER") == 0){ 
                
                                  // Allocation Dynamique // 

            T = (Point*)malloc(sizeof(Point));

                    printf("Donnez la nombre d'etudiant : ");
                    scanf("%d",&n);

                    printf("\n********************************\n");

                    printf("Donnez le nom et prenom d'etudiant  [1] : ");
                    scanf("%s %s",(T->name),(T->Prenom));

                    printf("Donnez la note d'etudiant [1] : ");
                    scanf("%f",&(T->note));

                    T -> next = NULL; 
                    head      = T;
                    start     = T;

            for (int i = 0; i < n-1; i++){

                    T = (Point*)malloc(sizeof(Point));

                    printf("Donnez le nom et prenom d'etudiant  [%d] : ",i+2);

                    scanf("%s %s",(T->name),(T->Prenom));

                    printf("Donnez la note d'etudiant [%d] : ",i+2);
                    
                    scanf("%f",&(T->note));

            T -> next      = NULL;
            start -> next  = T;
            start = start -> next;
           
            }   
            c = head;
            goto suite;
                }
                                    // SUPPRIMER UN ELEMENT//

            else if (strcmp(ans,"SUPPRIMER") == 0){
                
                        printf("************ donnez la note : **********");
                        scanf("%f",&a);
                        supprimer(&head , a);
                        c   =   head ;
                        goto suite ;
                } 
                                    // AFFICHER LES ELEMENT //

            else if (strcmp(ans,"AFFICHER") == 0){
 
                while (c){   
                printf("      %s           %s            %.2f\n",c->name,c->Prenom,c->note);   
                c = c->next;

                }
            }
                                    // TRIER LISTE CHAINEE //

            else if (strcmp(ans,"TRIER") == 0){
                
                fopen("Fist Try.txt","w");
                Trie(head);
                c = head;
                goto suite;
            }
                                    // SORTIE DE PROGRAMME //

            else if (strcmp(ans,"SORTIE") == 0){

                printf("\n==============================================\n");
                printf("      ******** SEE YOU NEXT TIME ******         \n");
                printf("=============================================== \n");
                                    // Sortie de File //
                exit(1);
            }
                                   
                                // Stocker les element dans le fichier //
                                                suite : ;
                while (c){
                    
                fprintf(fp,"      %s           %s            %.2f\n",c->name,c->Prenom,c->note);   
                c = c->next;
                
                }
                printf("\n==============================================\n");
                printf("              ******** DONE ******              \n");
                printf("=============================================== \n");
                fclose(fp);
            }
        }