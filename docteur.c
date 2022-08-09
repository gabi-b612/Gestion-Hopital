#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "hopital.h"

typedef struct docteur
{
    char nom[20];
    char prenom[20];
    char postnom[20];
    char telephone[10];
    char maticule[7];
    char specialisation[50];
} Doc;

void save_doctor(Doc *p)
{   
    int len_number, i;

    printf("Entrez le prénom du docteur : ");
    scanf("%20s", (*p).prenom);
    // 
    printf("Entrez le nom du docteur : ");
    scanf("%20s", (*p).nom);
    // 
    printf("Entrez le postnom du docteur : ");
    scanf("%20s", (*p).postnom);
    // 
    //
    printf("Entrez le numero de telephone du docteur :");
    scanf("%s", (*p).telephone);
    len_number = strlen((*p).telephone);
    while (len_number != 10 || (*p).telephone[0] != '0')
    {
        printf("\nImpossible d'enregistre votre numero....\n");
        printf("Verifier que votre numero commence par 08 ou 09 et qu'il a 10 chiffres\n");
        printf("\nEntrez a nouveau votre numero :");
        scanf("%s", (*p).telephone);
        len_number = strlen((*p).telephone);
    }
    if (len_number == 10)
    {
        while ((*p).telephone[1] != '8' && (*p).telephone[1] != '9')
        {
            printf("\nImpossible d'enregistre votre numero....\n");
            printf("Verifier que votre numero commence par 08 ou 09 et qu'il a 10 chiffres\n");
            printf("\nEntrez a nouveau votre numero :");
            scanf("%s", (*p).telephone);
        }   
    }
}
void adding(Doc rep[], int indice)
{
    printf("\nEnregistrement d'un docteur....\n");
    save_doctor(&rep[indice]);
}

void view_doctor(Doc rep[], int indice)
{
    int i;
    if (indice == 0)
    {
        printf("\nNous ne pouvons pas affiche vos contact si votre repertoire est vide .....\n");
        printf("Merci de bien vouloire ajouter un contact...\n\n");
    }
    else
    {
        printf("\nTOUS LES DOCTEURS \n");
        for ( i = 0; i < indice; i++)
        {
            printf("\n%d. %s ------- %s ---------- %s\n",i+1, rep[i].prenom , rep[i].nom, rep[i].postnom);
            printf("20KM095 ------- %s \n", /*rep->maticule*/ rep[i].telephone);
            // printf("%s", rep->specialisation);
            printf("------------------------------------------------------------------\n");
        }
    }
}