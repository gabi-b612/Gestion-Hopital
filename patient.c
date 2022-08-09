#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void save_Patient(Pat *p , int indice)
{   
    int len_number, i;

    printf("Entrez le prénom du patient : ");
    scanf("%20s", (*p).prenom);
    // 
    printf("Entrez le nom du patient : ");
    scanf("%20s", (*p).nom);
    // 
    printf("Entrez le postnom du patient : ");
    scanf("%20s", (*p).postnom);
    // 
    //
    printf("Entrez le numero de telephone du patient :");
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

    printf("Le poid du patient : ");
    scanf("%f", (*p).poid);
    printf("La taille du patient : ");
    scanf("%f", (*p).taille);
    printf("L'age du patient : ");
    scanf("%d", (*p).age);
    printf("Genre M/F ?");
    scanf("%c", (*p).genre);
}
void adding_Patient(Pat rep[], int indice)
{
    printf("\nEnregistrement d'un Patient....\n");
    save_Patient(&rep[indice], indice);
}

void view_Patient(Pat rep[], int indice)
{
    int i;
    if (indice == 0)
    {
        printf("\nAucun patient n'est encore enregistre chez nous ....\n");
        printf("Merci de bien vouloire ajouter un patient...\n\n");
    }
    else
    {
        printf("\nTOUS LES PATIENTS \n");
        for ( i = 0; i < indice; i++)
        {
            printf("\n%d. %s ---- %s ---- %s\n",i+1, rep[i].prenom , rep[i].nom, rep[i].postnom);
            printf("%f kg ---- %f m ----- %c \n", rep[i].poid, rep[i].taille, rep[i].genre);
            printf("20KM001 id ---- %d ans ---- %s \n",rep[i].age, rep[i].telephone);
            printf("------------------------------------------------------------------\n");
        }
    }
}