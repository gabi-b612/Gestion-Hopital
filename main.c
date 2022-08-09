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
    Pat rep_pat[5];
    int indice = 0, choix_user;
    int indice_pat = 0;

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

            printf("\n6. Enregistrer un patient\n");
            printf("7. Afficher tous les patients \n");
            printf("8. Rechercher un patient \n");
            printf("9. Ouvrir le dossier d'un patient \n");
            printf("0. quitter le programme....\n");

            printf("\nVotre choix : ");
            scanf("%d", &choix_user);
        } while (choix_user < 1 || choix_user > 9);
        switch (choix_user)
        {
        case 1:
            adding(rep , indice);
            indice++;
            break;
        case 3:
            view_doctor(rep , indice);
            break;
        case 6:
            adding_Patient(rep_pat, indice_pat);
            indice_pat++;
            break;
        case 7:
            view_Patient(rep_pat, indice_pat);
            break;

        default:
            printf("Bye......\n\n");
            break;
        }
        
    } while (choix_user != 0);
    
}