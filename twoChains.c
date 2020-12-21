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

struct kratos *startIndicator;
struct kratos *endIndicator;

int totalChars = 0;
int lastCharID = 1;

void addChar()
{
    struct kratos *addAux = (struct kratos *)malloc(sizeof(struct kratos));
    addAux->characterID = lastCharID;
    lastCharID++;
    printf("\n Weapons quantity? | BladesOfChaos damage? | Axe damage? \n");
    scanf("%d %f %f", &addAux->weaponsQuantity, &addAux->bladesOfChaosDamage, &addAux->axeDamage);
    addAux->previousChar = NULL;
    addAux->nextChar = NULL;
    totalChars++;
    if (totalChars == 0)
    {
        startIndicator = addAux;
        endIndicator = addAux;
    }
    else
    {
        addAux->nextChar = startIndicator;
        
    }
}

void updateChar()
{
    if (totalChars == 0)
    {
        printf("\n Error = The queue is empty. \n")
    }
    else
    {
        struct kratos *updateAux;
    }
}

void removeChar()
{
    if (totalChars == 0)
    {
        printf("\n Error = The queue is empty. \n");
    }
    else
    {
        if ()
        {
            struct kratos *removeAux = endIndicator;
            endIndicator = endIndicator->previousChar;
            endIndicator->nextChar = NULL;
            free(removeAux);
            totalChars--;
        }
    }
}

void charsList() // All set
{
    struct kratos *listAux;
    while (listAux != NULL)
    {
        printf("Weapons quantity = %d | BladesOfChaos damage = %f | Axe damage = %f ", listAux->weaponsQuantity, listAux->bladesOfChaosDamage, listAux->axeDamage);
        listAux = listAux->nextChar;
    }
}

int menu()
{
    int userChoice;
    printf("\n Welcome to GodOfWar Char Manager v1.0\n");
    printf("\n Please, choose your option = \n");
    printf("\n 1 = Add | 2 = Update | 3 = Remove | 4 = List | 5 = Exit \n");
    scanf("%d", &userChoice);
    return userChoice;
}

int main()
{
    int userChoice = 0;
    userChoice = menu();
    switch (userChoice)
    {
    case 1:
        addChar();
        break;
    case 2:
        updateChar();
        break;
    case 3:
        removeChar();
        break;
    case 4:
        charsList();
        break;
    case 5:
        break;
    }
}