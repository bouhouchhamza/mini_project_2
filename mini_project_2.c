#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i , result = 0 , tentative = 10 ;
    char tab1[] = "youcode";
    char tab2[] = {'_','_','_','_','_','_','_','\0'};
    char letter ;

    printf("Mot caché : %s\n", tab2);


    for(i=0;i<tentative;i++){
            printf("tentative %d/%d \n entrer letter : ",i+1,tentative);
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

     if(result==0){
        printf("la lettre qui vous entree est incorect");
     }

     if(strcmp(tab1,tab2) == 0){
        printf("felicitation vous aver trouver le mot : %s\n",tab1);
        }
     if(i== tentative - 1 && strcmp(tab1, tab2) != 0){
        printf(" vous avez perdu ! Le mot était : %s\n", tab1);
     }

    }



    return 0;
}
