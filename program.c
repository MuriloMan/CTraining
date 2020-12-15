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

void addSurvivor()
{
    struct survivor *addHelper = (struct survivor *)malloc(sizeof(struct survivor));
    addHelper->survivorID = lastSurvivorID;
    printf("\n Colt quantity? | Colt damage? | Shotgun quantity? | Shotgun damage? \n");
    scanf("%d %f %d %f", &addHelper->coltQuantity, &addHelper->coltDamage, &addHelper->shotgunQuantity, &addHelper->shotgunDamage);

    if (totalSurvivors == 0)
    {
        topPointer = addHelper;
    }
    else
    {
        addHelper->nextPointer = topPointer;
    }
    totalSurvivors++;
}

void removeSurvivor()
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

void survivorsList()
{
    if (totalSurvivors == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
    else
    {
        struct survivor *listHelper = topPointer;
        printf("\n Survivor ID = %d | Colt quantity = %d | Colt damage = %d | Shotgun quantity = %d | Shotgun damage = %d \n", listHelper->survivorID, listHelper->coltQuantity, listHelper->coltDamage, listHelper->shotgunQuantity, listHelper->shotgunDamage);
        listHelper = listHelper->nextPointer;
    }
}

void updateSurvivor()
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
        }
        else
        {
            updateHelper = updateHelper->nextPointer;
        }
    }
}

int main()
{
}