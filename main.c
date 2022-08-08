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

typedef struct patient
{
    char nom[20];
    char prenom[20];
    char postnom[20];
    char telephone[10];
    float poid;
    float taille;
    char genre[1];
    int age;
    char id[7];
} Pat;

int main()
{
    Doc rep[5];
    int indice = 0, choix_user;

    printf("\n\n######## HOPITAL HIPTOP ############");
    printf("\nMenu : \n\n");

    do
    {
        do
        {
            printf("\n1. Enregistrer un docteur\n");
            printf("2. Enregistrer l'horaire\n");
            printf("3. Afficher tous les docteurs\n");
            printf("4. Afficher l'horaire d'un docteur\n");
            printf("5. Afficher tous les docteurs libre\n");
            printf("6. quitter le programme....\n");

            printf("\nVotre choix : ");
            scanf("%d", &choix_user);
        } while (choix_user < 1 || choix_user > 6);
        switch (choix_user)
        {
        case 1:
            adding(rep , indice);
            indice++;
            break;
        case 3:
            view_doctor(rep , indice);
            break;

        default:
            printf("Bye......\n\n");
            break;
        }
        
    } while (choix_user != 6);
    
}