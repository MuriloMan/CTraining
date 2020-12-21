#include <stdio.h>
#include <stdlib.h>

struct kratos
{
    struct kratos *previousChar;
    struct kratos *nextChar;
    int characterID;
    int weaponsQuantity;
    float bladesOfChaosDamage;
    float axeDamage;
};

struct kratos *topIndicator;
int totalChars = 0;
int lastCharID = 1;

void addChar()
{
    struct kratos *addAux;
    totalChars++;
}

void updateChar()
{
    struct kratos *updateAux;
}

void removeChar()
{
    struct kratos *removeAux;
    totalChars--;
}

void charsList()
{
    struct kratos *listAux;
}

int menu()
{
    int userChoice;
    printf("\n Welcome to GodOfWar Char Manager v1.0\n");
    printf("\n Please, choose your option = \n");
    printf("\n 1 = Add | 2 = Update | 3 = Remove | 4 = List | 5 = Exit \n");
    scanf("%d",&userChoice);
    return userChoice;
}

int main()
{
}