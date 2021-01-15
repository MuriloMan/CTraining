#include <stdio.h>
#include <stdlib.h>

struct bot
{
    struct bot *nextPointer;
    struct bot *previousPointer;
    int botID;
    int batteries;
    int metalParts;
    float batterySize;
    float totalMetalWeight;
};

struct bot *topPointer;

int totalBots = 0;
int lastBotID = 1;

// From zero to hero = 01/14/2021 - 10:25 = Struct CRUD (Double chained) -> "Create" method

void createBot()
{
    struct bot *createAux = (struct bot *)malloc(sizeof(struct bot));
    createAux->botID = lastBotID;
    lastBotID++;
    printf("\n Batteries quantity? | Battery size? | Metal parts quantity? | Total metal weight? \n");
    scanf("%d %f %d %f", &createAux->batteries, &createAux->batterySize, &createAux->metalParts, &createAux->totalMetalWeight);

    if (totalBots == 0)
    {
        topPointer = createAux;
    }
    else
    {
        createAux->nextPointer = topPointer;
        topPointer = createAux;
    }
    totalBots++;
}

void botsList()
{
    struct bot *listAux = topPointer;
    if (totalBots == 0)
    {
        printf("\n Error = The bot pile is empty. \n");
    }
    while (listAux != NULL)
    {
        struct bot *listAux = topPointer;
        printf("\n Bot ID = %d | Batteries quantity = %d | Battery size = %f | Metal parts quantity = %d | Total metal weight = %f \n", &listAux->botID, &listAux->batteries, &listAux->batterySize, &listAux->metalParts, &listAux->totalMetalWeight);
        listAux = listAux->nextPointer;
    }
}

void updateBot()
{
    if (totalBots == 0)
    {
        printf("\n Error = The bots pile is empty. \n");
    }
    else
    {
        struct bot *updateAux = topPointer;
        int editionID = 0;
        printf("\n Please, insert the bot ID to be customized. \n");
        scanf("%d", &editionID);

        while (updateAux != NULL)
        {
            if (updateAux->botID == editionID)
            {
                printf("\n Update data = Batteries quantity? | Battery size? | Metal parts quantity? | Total metal weight? \n");
                scanf("%d %f %d %f", &updateAux->batteries, &updateAux->batterySize, &updateAux->metalParts, &updateAux->totalMetalWeight);
                updateAux = NULL;
            }
            else
            {
                updateAux = updateAux->nextPointer;
            }
        }
    }
}

// Continue from here

void deleteBot()
{
    if (totalBots == 0)
    {
        printf("\n Error = The bot pile is empty. \n");
    }
    else
    {
        struct bot *deleteAux = topPointer;
        int removalID = 0;
        printf("\n Please, type the bot ID to be removed = \n");
        scanf("%d", &removalID);

        do
        {
            if (deleteAux->botID == removalID)
            {
                struct bot *nextIndicator = deleteAux->nextPointer;
                struct bot *previousIndicator = deleteAux->previousPointer;
                free(deleteAux);
                nextIndicator->previousPointer = previousIndicator;
                previousIndicator->nextPointer = nextIndicator;
                totalBots--;
            }
        } while (deleteAux != NULL);
    }
}



/*
void deleteBotObsoleteVersion()
{
    if (totalBots == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
    else
    {
        struct bot *removalAux = topPointer;
        int removalChosenID = 0;
        printf("\n Please, type the bot ID to be removed = \n");
        scanf("%d", &removalChosenID);
        do
        {
            if (removalChosenID == removalAux->botID)
            {
                struct bot *nextArrow = removalAux->nextPointer;
                struct bot *previousArrow = removalAux->previousPointer;
                free(removalAux);
                nextArrow->previousPointer = previousArrow;
                previousArrow->nextPointer = nextArrow;
                totalBots--;
            }
            else
            {
                removalAux = removalAux->previousPointer;
            }
        } while (removalAux != NULL);
    }
}

void deleteBot02()
{
    if (totalBots2 == 0)
    {
        printf("\n Error. The pile is empty. \n");
    }
    else
    {
        struct bot *removalAux02 = topPointer02;
        int removalChosenID02 = 0;
        printf("\n Please, type the bot ID to be removed (Repetition 02)= \n");
        scanf("%d", &removalChosenID02);
        do
        {
            if (removalChosenID02 == removalAux02->botID02)
            {
                struct bot *nextArrow02 = removalAux02->nextPointer02;
                struct bot *previousArrow02 = removalAux02->previousPointer02;
                free(removalAux02);
                nextArrow02->previousPointer02 = previousArrow02;
                previousArrow02->nextPointer02 = nextArrow02;
                totalBots02--;
            }
            else
            {
                removalAux02 = removalAux02->previousPointer02;
            };
        } while (removalAux02 != NULL);
    }
}

void deleteBot03()
{
    if (totalBots03 == 0)
    {
        printf("\n Error. The pile is empty. \n");
    }
    else
    {
        struct bot *removalAux03 = topPointer03;
        int removalChosenID03 = 0;
        printf("\n Please, type the bot ID to be removed (Repetition 03) = \n");
        scanf("%d", &removalChosenID03);
        do
        {
            if (removalChosenID03 == removalAux03->botID03)
            {
                struct bot *nextArrow03 = removalAux03->nextPointer03;
                struct bot *previousArrow03 = removalAux03->previousPointer03;
                free(removalAux03);
                nextArrow03->previousPointer03 = previousArrow03;
                previousArrow03->nextPointer03 = nextArrow03;
                totalBots03--;
            }
            else
            {
                removalAux03 = removalAux03->previousPointer03;
            };
        } while (removalAux03 != NULL);
    }
}

void deleteBot04()
{
    if (totalBots04 == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
    else
    {
        struct bot *removalAux04 = topPointer04;
        int removalChosenID04 = 0;
        printf("\n Please, type the ID to be removed (Repetition 04) = \n");
        scanf("%d", &removalChosenID04);
        do
        {
            if (removalChosenID04 == removalAux04->botID04)
            {
                struct bot *nextArrow04 = removalAux04->nextPointer04;
                struct bot *previousArrow04 = removalAux04->previousPointer04;
                free(removalAux04);
                nextArrow04->previousPointer04 = previousArrow04;
                previousArrow04->nextPointer04 = nextArrow04;
                totalBots04--;
            }
            else
            {
                removalAux04 = removalAux04->previousPointer04;
            };
        } while (removalAux04 != NULL);
    }
}

void deleteBot05()
{
    if (totalBots05 == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
    else
    {
        struct bot *removalAux05 = topPointer05;
        int removalChosenID05 = 0;
        printf("\n Please, type the ID to be removed (Repetition 05) = \n");
        scanf("%d", &removalChosenID05);
        do
        {
            if (removalChosenID05 == removalAux05->botID05)
            {
                struct bot *nextArrow05 = removalAux05->nextPointer05;
                struct bot *previousArrow05 = removalAux05->previousPointer05;
                free(removalAux05);
                nextArrow05->previousPointer05 = previousArrow05;
                previousArrow05->nextPointer05 = nextArrow05;
                totalBots05--;
            }
            else
            {
                removalAux05 = removalAux05->previousPointer05;
            };
        } while (removalAux05 != NULL);
    }
}

void deleteBot06()
{
    if (totalBots06 == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
    else
    {
        struct bot *removalAux06 = topPointer06;
        int removalChosenID06 = 0;
        printf("\n Please, type the ID to be removed (Repetition 06) = \n");
        scanf("%d", &removalChosenID06);
        do
        {
            if(removalChosenID06 == removalAux06->botID06{
                struct bot *nextArrow06 = removalAux06->nextPointer06;
                struct bot *previousArrow06 = removalAux06->previousPointer06;
                free(removalAux06);
                nextArrow06->previousPointer06 = previousArrow06;
                previousArrow06->nextPointer06 = nextArrow06;
                totalBots06--;
            }
            else{
                removalAux06 = removalAux->previousPointer06;
            };
        } while (removalAux06 != NULL);
    }
}

void deleteBot07()
{
    if (totalBots07 == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
    else
    {
        struct bot *removalAux07 = topPointer07;
        int removalChosenID07 = 0;
        printf("\n Please, type the ID to be removed (Repetition 07) = \n");
        scanf("%d", &removalChosenID07);
        do
        {
            if (removalChosenID07 == removalAux07->botID07)
            {
                struct bot *nextArrow07 = removalAux07->nextPointer07;
                struct bot *previousArrow07 = removalAux07->previousPointer07;
                free(removalAux07);
                nextArrow07->previousPointer07 = previousArrow07;
                previousArrow07->nextPointer07 = nextArrow07;
                totalBots07--;
            }
            else
            {
                removalAux07 = removalAux07->previousPointer07;
            };
        } while (removalAux07 != NULL);
    }
}

void deleteBot08()
{
    if (totalBots08 == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
    else
    {
        struct bot *removalAux08 = topPointer08;
        int removalChosenID08 = 0;
        printf("\n Please, type the ID to be removed (Repetition 08) = \n");
        scanf("%d", &removalChosenID08);
        do
        {
            if (removalChosenID08 == removalAux08->botID08)
            {
                struct bot *nextArrow08 = removalAux08->nextPointer08;
                struct bot *previousArrow08 = removalAux08->previousPointer08;
                free(removalAux08);
                nextArrow08->previousPointer08 = previousArrow08;
                previousArrow08->nextPointer08 = nextArrow08;
                totalBots08--;
            }
            else
            {
                removalAux08 = removalAux08->previousPointer08;
            };
        } while (removalAux08 != NULL);
    }
}

void deleteBot09()
{
    if (totalBots09 == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
    else
    {
        struct bot *removalAux09 = topPointer09;
        int removalChosenID09 = 0;
        printf("\n Please, type the ID to be removed (Repetition 09) = \n");
        scanf("%d", &removalChosenID09);
        do
        {
            if (removalChosenID09 == removalAux09->botID09)
            {
                struct bot *nextArrow09 = removalAux09->nextPointer09;
                struct bot *previousArrow09 = removalAux09->previousPointer09;
                free(removalAux09);
                nextArrow09->previousPointer09 = previousArrow09;
                previousArrow09->nextPointer09 = nextArrow09;
                totalBots09--;
            }
            else
            {
                removalAux09 = removalAux09->previousPointer09;
            };
        } while (removalAux09 != NULL);
    }
}

void deleteBot10()
{
    if (totalBots10 == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
    else
    {
        struct bot *removalAux10 = topPointer10;
        int removalChosenID10 = 0;
        printf("\n Please, type the ID to be removed (Repetition 10) = \n");
        scanf("%d", &removalChosenID10);
        do
        {
            if (removalChosenID10 == removalAux10)
            {
                struct bot *nextArrow10 = removalAux10->nextPointer10;
                struct bot *previousArrow10 = removalAux10->previousPointer10;
                free(removalAux10);
                nextArrow10->previousPointer10 = previousArrow10;
                previousArrow10->nextPointer10 = nextArrow10;
                totalBots10--;
            }
            else
            {
                removalAux10 = removalAux10->previousPointer10;
            };
        } while (removalAux10 != NULL);
    }
}

void deleteBot11()
{
    if (totalBots11 == 0)
    {
        printf("\n Error = The pile is empty. \n";
    }
    else
    {
        struct bot *removalAux11 = topPointer11;
        int removalChosenID11 = 0;
        printf("\n Please, type the ID to be removed (Repetition 11) = \n");
        scanf("%d", &removalChosenID11);
        do
        {
            if (removalChosenID11 == removalAux11)
            {
                struct bot *nextArrow11 = removalAux11->nextPointer11;
                struct bot *previousArrow11 = removalAux11->previousPointer11;
                free(removalAux11);
                nextArrow11->previousPointer11 = previousArrow11;
                previousArrow11->nextPointer11 = nextArrow11;
                totalBots11--;
            }
            else
            {
                removalAux11 = removalAux11->previousPointer11;
            };
        } while (removalAux11 != NULL);
    }
}

void deleteBot12()
{
    if (totalBots12 == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
    else
    {
        struct bot *removalAux12 = topPointer12;
        int removalChosenID12 = 0;
        printf("\n Please, type the ID to be removed (Repetition 12) = \n");
        scanf("%d", &removalChosenID12);
        do
        {
            if (removalChosenID12 == removalAux12)
            {
                struct bot *nextArrow12 = removalAux12->nextPointer12;
                struct bot *previousArrow12 = removalAux12->previousPointer12;
                free(removalAux12);
                nextArrow12->previousPointer12 = previousArrow12;
                previousArrow12->nextPointer12 = nextArrow12;
                totaBots12--;
            }
            else
            {
                removalAux12 = removalAux12->previousPointer12;
            };
        } while (removalAux12 != NULL);
    }
}

void deleteBot13()
{
    if (totalBots13 == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
    else
    {
        struct bot *removalAux13 = topPointer13;
        int removalChosenID13 = 0;
        printf("\n Please, type the ID to be removed (Repetition 13) = \n");
        scanf("%d", &removalChosenID13);
        do
        {
            if (removalChosenID13 == removalAux13)
            {
                struct bot *nextArrow13 = removalAux13->nextPointer13;
                struct bot *previousArrow13 = removalAux13->previousPointer13;
                free(removalAux13);
                nextArrow13->previousPointer13 = previousArrow13;
                previousArrow13->nextPointer13 = nextArrow13;
                totalBots13--;
            }
            else
            {
                removalAux13 = removalAux13->previousPointer13;
            };
        } while (removalAux13 != NULL);
    }
}

void deleteBot14()
{
    if (totalBots14 == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
    else
    {
        struct bot *removalAux14 = topPointer14;
        int removalChosenID14 = 0;
        printf("\n Please, type the ID to be removed (Repetition 14) = \n");
        scanf("%d", &removalChosenID14);
        do
        {
            if (removalChosenID14 == removalAux14)
            {
                struct bot *nextArrow14 = removalAux14->nextPointer14;
                struct bot *previousArrow14 = removalAux14->previousPointer14;
                free(removalAux14);
                nextArrow14->previousPointer14 = previousArrow14;
                previousArrow14->nextPointer14 = nextArrow14;
                totalBots14--;
            }
            else
            {
                removalAux14 = removalAux14->previousPointer14;
            };
        } while (removalAux14 != NULL);
    }
}

void deleteBot15()
{
    if (totalBots15 == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
    else
    {
        struct bot *removalAux15 = topPointer15;
        int removalChosenID15 = 0;
        do
        {
            if (removalChosenID15 == removalAux15)
            {
                struct bot *nextArrow15 = removalAux15->nextPointer15;
                struct bot *previousArrow15 = removalAux15->previousPointer15;
                free(removalAux15);
                nextArrow15->previousPointer15 = previousArrow15;
                previousArrow15->nextPointer15 = nextArrow15;
                totalBots15--;
            }
            else
            {
                removalAux15 = removalAux15->previousPointer15;
            };
        } while (removalAux15 != NULL);
    }
}

void deleteBot16()
{
    if (totalBots16 == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
    else
    {
        struct bot *removalAux16 = topPointer16;
        int removalChosenID16 = 0;
        do
        {
            if (removalChosenID16 == removalAux16)
            {
                struct bot *nextArrow16 = removalAux16->nextPointer16;
                struct bot *previousArrow16 = removalAux16->previousPointer16;
                free(removalAux16);
                nextArrow16->previousPointer16 = previousArrow16;
                previousArrow16->nextPointer16 = nextArrow16;
                totalBots16--;
            }
            else
            {
                removalAux16 = removalAux16->previousPointer16;
            };
        } while (removalAux16 != NULL);
    }
}

void deleteBot17()
{
    if (totalBots17 == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
    else
    {
        struct bot *removalAux17 = topPointer17;
        int removalChosenID17 = 0;
        do
        {
            if (removalChosenID17 == removalAux17)
            {
                struct bot *nextArrow17 = removalAux17->nextPointer17;
                struct bot *previousArrow17 = removalAux17->previousPointer17;
                free(removalAux17);
                nextArrow17->previousPointer17 = previousArrow17;
                previousArrow17->nextPointer17 = nextArrow17;
                totalBots17--;
            }
            else
            {
                removalAux17 = removalAux17->previousPointer17;
            };
        } while (removalAux17 != NULL);
    }
}

void deleteBot18()
{
    if (totalBots18 == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
    else
    {
        struct bot *removalAux18 = topPointer18;
        int removalChosenID18 = 0;
        do
        {
            if (removalChosenID18 == removalAux18)
            {
                struct bot *nextArrow18 = removalAux18->nextPointer18;
                struct bot *previousArrow18 = removalAux18->previousPointer18;
                free(removalAux18);
                nextArrow18->previousPointer18 = previousArrow18;
                previousArrow18->nextPointer18 = nextArrow18;
                totalBots18--;
            }
            else
            {
                removalAux18 = removalAux18->previousPointer18;
            };
        } while (removalAux18 != NULL);
    }
}

void deleteBot19()
{
    if (totalBots19 == 0)
    {
        printf("\n Error = The pile is empty. \n");
    }
    else
    {
        struct bot *removalAux19 = topPointer19;
        int rmovalChosenID19 = 0;
        do
        {
            if (removalChosenID19 == removalAux19)
            {
                struct bot *nextArrow19 = removalAux19->nextPointer19;
                struct bot *previousArrow19 = removalAux19->previousPointer19;
                free(removalAux19);
                nextArrow19->previousPointer19 = previousArrow19;
                previousArrow19->nextPointer19 = nextArrow19;
                totalBots19--;
            }
            else
            {
                removalAux19 = removalAux19->previousPointeR19;
            };
        } while (removalAux19 != NULL);
        if ()
        {
        }
    }
}
*/

int botMainMenu()
{
    int userChoice;
    printf("\n Welcome to B.M.S. - Bot Management System - Double chained version \n");
    printf("\n Please, choose your option. 1 = Create | 2 = Read | 3 = Update | 4 = Delete | -5 = Exit \n");
    scanf("%d", &userChoice);
    return userChoice;
}

/*

int soldierMainMenu()
{
    int userChoice02;
    printf("\n Welcome to S.M.S. - Soldier Management System \n");
    printf("\n Please, choose the desired operation = 1 = Build(C) | 2 = Reading(R) | 3 = Update(U) | 4 = Delete(D) | -10 = Exit \n");
}

*/

int main()
{
    int userChoice;

    while (userChoice != -5)
    {
        userChoice = botMainMenu();

        switch (userChoice)
        {
        case 1:
            createBot();
            break;
        case 2:
            botsList();
            break;
        case 3:
            updateBot();
            break;
        case 4:
            deleteBot();
            break;
        case 5:
            break;
        }
    }
}
