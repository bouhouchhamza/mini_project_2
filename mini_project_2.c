#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int  result = 0 , tentative = 10 , errors=0 ;
    char tab1[] = "youcode";
    char tab2[] = {'_','_','_','_','_','_','_','\0'};
    char letter ;

    printf("Mot caché : %s\n", tab2);

    int i=0;
    while(errors < tentative && strcmp(tab1, tab2) != 0){
            printf("tentative %d  \n ",tentative-errors);
            printf("Entrer une lettre : ");
            scanf(" %c",&letter);

            int j ;
            int result = 0;
            for(j=0;j<strlen(tab1);j++){
                if(tab1[j]==letter){
                   tab2[j] = letter ;
                   result = 1;
                }
                }
     printf("Mot actuel : %s\n", tab2);
     if(result == 0){
            errors++;
            printf(" Lettre incorrecte !\n");
        } else {
            printf(" Bonne lettre !\n");
        }

     if(result==0){
        printf("la lettre qui vous entree est incorect \n");
     }

     if(strcmp(tab1,tab2) == 0){
        printf("felicitation vous aver trouver le mot : %s\n",tab1);
     if(errors== tentative - 1 && strcmp(tab1, tab2) != 0){
        printf(" vous avez perdu ! Le mot était : %s\n", tab1);
     }

    }


}

    return 0;
}
