#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "hopital.h"

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