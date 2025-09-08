#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int result, tentative = 10, errors = 0;
    char tab1[] = "youcode";
    char tab2[] = {'_','_','_','_','_','_','_','\0'};
    char letter;

    printf("Mot cach� : %s\n", tab2);

    while(errors < tentative && strcmp(tab1, tab2) != 0){
        printf("\nTentative restante: %d\n", tentative - errors);
        printf("Entrer une lettre : ");
        scanf(" %c", &letter);

        result = 0;
        for(int j = 0; j < strlen(tab1); j++){
            if(tab1[j] == letter){
                tab2[j] = letter;
                result = 1;
            }
        }

        printf("Mot actuel : %s\n", tab2);

        if(result == 0){
            errors++;
            printf("la Lettre %c est incorrecte !\n",letter);
        } else {
            printf("Bonne lettre !\n");
        }
    }

    if(strcmp(tab1, tab2) == 0){
        printf("\nF�licitations ! Vous avez trouv� le mot : %s\n", tab1);
    } else {
        printf("\nGame Over ! Le mot �tait : %s\n", tab1);
    }

    return 0;
}
