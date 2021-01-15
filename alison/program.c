#include <stdio.h>
#include <stdlib.h>

struct survivor
{
    struct survivor *nextPointer;
    int survivorID;
    int coltQuantity;
    int shotgunQuantity;
    float coltDamage;
    float shotgunDamage;
};

struct survivor *topPointer;

int totalSurvivors = 0;
int lastSurvivorID = 1;

void addSurvivor() // C*RUD
{
    struct survivor *addHelper = (struct survivor *)malloc(sizeof(struct survivor));
    addHelper->survivorID = lastSurvivorID;
    lastSurvivorID++;
    printf("\n Colt quantity? | Colt damage? | Shotgun quantity? | Shotgun damage? \n");
    scanf("%d %f %d %f", &addHelper->coltQuantity, &addHelper->coltDamage, &addHelper->shotgunQuantity, &addHelper->shotgunDamage);

    if (totalSurvivors == 0)
    {
        topPointer = addHelper;
    }
    else
    {
        addHelper->nextPointer = topPointer;
        topPointer = addHelper;
    }
    totalSurvivors++;
}

void survivorsList() // CR*UD
{
    struct survivor *listHelper = topPointer;
    while (listHelper != NULL)
    {
        printf("\n Survivor ID = %d | Colt quantity = %d | Colt damage = %f | Shotgun quantity = %d | Shotgun damage = %f \n", listHelper->survivorID, listHelper->coltQuantity, listHelper->coltDamage, listHelper->shotgunQuantity, listHelper->shotgunDamage);
        listHelper = listHelper->nextPointer;
    }
    if (totalSurvivors == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
}

void updateSurvivor() // CRU*D
{
    int blockCommandVar;
    struct survivor *updateHelper = topPointer;
    printf("\n Please, insert the survivor ID to be customized = \n");
    scanf("%d", &blockCommandVar);
    while (updateHelper != NULL)
    {
        if (updateHelper->survivorID == blockCommandVar)
        {
            printf("\n Insert the replacement values =\n");
            scanf("%d %f %d %f", &updateHelper->coltQuantity, &updateHelper->coltDamage, &updateHelper->shotgunQuantity, &updateHelper->shotgunDamage);
            updateHelper = NULL;
        }
        else
        {
            updateHelper = updateHelper->nextPointer;
        }
    }
}

void removeSurvivor() // CRUD*
{
    if (totalSurvivors == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
    else
    {
        struct survivor *removeHelper = topPointer;
        topPointer = removeHelper->nextPointer;
        free(removeHelper);
        totalSurvivors--;
    }
}

int mainMenu()
{
    int userSelection;
    printf("\n Welcome to Survivor System v1.0 \n");
    printf("\n Please, choose your option = \n");
    printf("\n 1 = Remove | 2 = Update | 3 = Add | 4 = List | 5 = Exit \n");
    scanf("%d", &userSelection);
    return userSelection;
}

int main()
{
    int userSelection = 0;
    while (userSelection != 5)
    {
        userSelection = mainMenu();
        switch (userSelection)
        {
        case 1:
            removeSurvivor();
            break;
        case 2:
            updateSurvivor();
            break;
        case 3:
            addSurvivor();
            break;
        case 4:
            survivorsList();
            break;
        case 5:
            break;
        }
    }
}