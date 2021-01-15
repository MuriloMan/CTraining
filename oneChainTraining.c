#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

// #05
#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

struct assassin
{
    struct assassin *nextAgent;
    int agentID;
    int silverballers;
    int poisonQuantity;
    float silverballerDamage;
    float poisonDuration;
};

struct assassin02
{
    struct assassin02 *nextAgent02;
    int agentlvl2ID;
    int goldenballersQuantity;
    int medkitQuantity;
    float goldenballersDamage;
    float medkitHealingValue;
};

struct assassin03
{
    struct assassin03 *nextAgent03;
    int agentlvl3ID;
    int diamondballersQuantity;
    int grenadesQuantity;
    float diamondballersDamage;
    float grenadeDamage;
};

struct assassin04
{
    struct assassin04 *nextAgent04;
    int agentlvl4ID;
    int bronzeballersQuantity;
    int ump45SDQuantity;
    float bronzeballersDamage;
    float ump45SDDamage;
};

struct assassin05
{
    struct assassin05 *nextAgent05;
    int agentlvl5ID;
    int sapphireballersQuantity;
    int uziSDQuantity;
    float sapphireballersDamage;
    float uziSDDamage;
};

struct assassin06
{
    struct assassin06 *nextAgent06;
    int agentlvl6ID;
    int rubyballersQuantity;
    int knifeQuantity;
    float rubyballersDamage;
    float knifeDamage;
};

struct assassin07
{
    struct assassin07 *nextAgent07;
    int agentlvl7ID;
    int platinumballersQuantity;
    int dragunovSDQuantity;
    float platinumballersQuantity;
    float dragunovSDDamage;
};

struct assassin08
{
    struct assassin08 *nextAgent08;
    int agentlvl8ID;
    int makarovSDQuantity;
    int ak47SDQuantity;
    float makarovSDDamage;
    float ak47SDDamage;
};

struct assassin09
{
    struct assassin10 *nextAgent09;
    int agentlvl9ID;
    int usp45SDQuantity;
    int mac10SDQuantity;
    float usp45SDDamage;
    float mac10SDDamage;
};

struct assassin10
{
    struct assassin10 *nextAgent10;
    int agentlvl10ID;
    int desertEagleSDQuantity;
    int c4Quantity;
    float desertEagleSDDamage;
    float c4Damage;
};

struct assassin *queueStart;
int totalAgents = 0;
int lastAgentID = 1;

struct assassin02 *queueStart02;
int totalAgents02 = 0;
int lastAgentID02 = 1;

struct assassin03 *queueStart03;
int totalAgents03 = 0;
int lastAgentID03 = 1;

struct assassin04 *queueStart04;
int totalAgents04 = 0;
int lastAgentID04 = 1;

struct assassin05 *queueStart05;
int totalAgents05 = 0;
int lastAgentID05 = 1;

struct assassin06 *queueStart06;
int totalAgents06 = 0;
int lastAgentID06 = 1;

struct assassin07 *queueStart07;
int totalAgents07 = 0;
int lastAgentID07 = 1;

struct assassin08 *queueStart08;
int totalAgents08 = 0;
int lastAgentID08 = 1;

struct assassin09 *queueStart09;
int totalAgents09 = 0;
int lastAgentID09 = 1;

struct assassin10 *queueStart10;
int totalAgents10 = 0;
int lastAgentID10 = 1;

int mainMenu()
{
    int userChoice;
    printf("\n Welcome to Agency menu v1.0 \n");
    printf("\n Please, type the desired option = \n");
    printf("\n 1 = Update | 2 = Add | 3 = Remove | 4 = List | -5 = Exit \n");
    scanf("%d", &userChoice);
    return userChoice;
}

int mainMenu02()
{
    int userChoice02;
    printf("\n Welcome to Agent menu v2.0 \n");
    printf("\n Please, type the desired choice = \n");
    printf("\n 1 = Add | 2 = Update | 3 = Remove | 4 = List | 5 = Exit \n");
    scanf("%d", &userChoice02);
}

int mainMenu03()
{
    int userChoice03;
    printf("\n Welcome to Agent menu v3.0 \n");
    printf("\n Please, enter the desired choice = \n");
    printf("\n 1 = Remove | 2 = Add | 3 = Update | 4 = List | -1 = Exit \n");
    scanf("%d", &userChoice03);
}

int mainMenu04()
{
    int userChoice04;
    printf("\n Welcome to Agent menu v4.0 \n");
    printf("\n Please, enter your option = \n");
    printf("\n 1 = Add | 2 = Remove | 3 = List | 4 = Update | -2 = Exit \n");
    scanf("%d", &userChoice04);
}

int mainMenu05()
{
    int userChoice05;
    printf("\n Welcome to Agent menu v5.0 \n");
    printf("\n Please, type the selected option = \n");
    printf("\n 1 = Remove | 2 = Update | 3 = List | 4 = Add | -3 = Exit \n");
    scanf("%d", &userChoice05);
}

int mainMenu06()
{
    int userChoice06;
    printf("\n Welcome to Agent menu v6.0 \n");
    printf("\n Please, enter the chosen value = \n");
    printf("\n 1 = Remove | 2 = Update | 3 = Add | 4 = List | -4 = Exit \n");
    scanf("%d", &userChoice06);
}

int mainMenu07()
{
    int userChoice07;
    printf("\n Welcome to Agent menu v7.0 \n");
    printf("\n Please, type the desired option = \n");
    printf("\n 1 = Update | 2 = Remove | 3 = Add | 4 = List | -5 = Exit \n");
    scanf("%d", &userChoice07);
}

int mainMenu08()
{
    int userChoice08;
    printf("\n Welcome to Agent menu v8.0 \n");
    printf("\n Please, type the selected operation = \n");
    printf("\n 1 = Remove | 2 = List | 3 = Update | 4 = Add | -6 = Exit \n");
    scanf("%d", &userChoice08);
}

int mainMenu09()
{
    int userChoice09;
    printf("\n Welcome to Agent menu v9.0 \n");
    printf("\n Please, type the selected choice = \n");
    printf("\n 1 = Add | 2 = Update | 3 = Remove | 4 = List | -7 = Exit \n");
    scanf("%d", &userChoice09);
}

int mainMenu10()
{
    int userChoice10;
    printf("\n Welcome to Agent menu v10.0\n");
    printf("\n Please, insert your operation choice value = \n");
    printf("\n 1 = Remove | 2 = List | 3 = Add | 4 = Update | -8 = Exit \n");
    scanf("%d", &userChoice10);
}

// Understand the small code parts to understand the big code parts

void addAgent()
{
    struct assassin *createAux = (struct assassin *)malloc(sizeof(struct assassin));
    createAux->agentID = lastAgentID;
    lastAgentID++;
    printf("\n Siverballers quantity? | Silverballers damage? | Poison quantity? | Poison duration? \n");
    scanf("%d %f %d %f", &createAux->silverballers, &createAux->silverballerDamage, &createAux->poisonQuantity, &createAux->poisonDuration);
    if (totalAgents == 0)
    {
        queueStart = createAux;
    }
    else
    {
        createAux->nextAgent = queueStart;
        queueStart = createAux;
    }
    totalAgents++;
}

void updateAgent()
{
    int userChosenID;
    printf("\n Type the agent ID to be customized = \n");
    scanf("%d", &userChosenID);
    struct assassin *updateAux = queueStart;

    while (updateAux != NULL)
    {
        if (userChosenID == updateAux->agentID)
        {
            printf("\n Insert the new data = Silverballers quantity? | Silverballer damage? | Poison quantity? | Poison duration? \n");
            scanf("%d %f %d %f", &updateAux->silverballers, &updateAux->silverballerDamage, &updateAux->poisonQuantity, &updateAux->poisonDuration);
            updateAux = NULL;
        }
        else
        {
            updateAux = updateAux->nextAgent;
        }
    }
}

void updateAgent02()
{
    int userChosenID02;
    printf("\n Type the agent ID02 to be customized = \n");
    scanf("%d", &userChosenID02);
    struct assassin02 *updateAux02 = queueStart02;

    while (updateAux02 != NULL)
    {
        if (userChosenID02 == updateAux02->agentlvl2ID)
        {
            printf("\n Insert the new data02: Goldenballers quantity? | Goldenballers damage? | Medkit quantity? | Medkit healing value? \n");
            scanf("%d %f %d %f", &updateAux02->goldenballersQuantity, &updateAux02->goldenballersDamage, &updateAux02->medkitQuantity, &updateAux02->medkitHealingValue);
            updateAux02 = NULL;
        }
    }
}

void updateAgent03()
{
    int userChosenID03;
    printf("\n Type the agent ID03 to be customized = \n");
    scanf("%d", &userChosenID03);
    struct assassin03 *updateAux03 = queueStart03;

    while (updateAux03 != NULL)
    {
        if (userChosenID03 == updateAux03->agentlvl3ID)
        {
            printf("\n Insert the new data03: Diamondballers quantity? | Diamondballers damage? | Grenade quantity? | Grenade damage? \n");
            scanf("%d %f %d %f", &updateAux03->diamondballersQuantity, &updateAux03->diamondballersDamage, &updateAux03->grenadesQuantity, &updateAux03->grenadeDamage);
        }
    }
}

void updateAgent04()
{
    int userChosenID04;
    printf("\n Type the agent ID03 to be customized = \n");
    scanf("%d", &userChosenID04);
    struct assassin04 *updateAux04 = queueStart04;

    while (updateAux04 != NULL)
    {
        if (userChosenID04 == updateAux04->agentlvl4ID)
        {
            printf("\n Insert the new data04: Bronzeballers quantity? | Bronzeballers damage? | UMP45 quantity? | UMP45 damage? \n");
            scanf("%d %f %d %f", &updateAux04->bronzeballersQuantity, &updateAux04->bronzeballersDamage, &updateAux04->ump45SDQuantity, &updateAux04->ump45SDDamage);
        }
    }
}

void updateAgent05()
{
    int userChosenID05;
    printf("\n Type the agend ID04 to be customized = \n");
    scanf("%d", &userChosenID05);
    struct assassin05 *updateAux05 = queueStart05;

    while (updateAux05 != NULL)
    {
        if (userChosenID05 == updateAux05->agentlvl5ID)
        {
            printf("\n Insert the new data05: Sapphireballers quantity? | Sapphireballers damage? | UziSD? | UziSD? \n");
            scanf("%d %f %d %f", &updateAux05->sapphireballersQuantity, &updateAux05->sapphireballersDamage, &updateAux05->uziSDQuantity, &updateAux05->uziSDDamage);
        }
    }
}

void updateAgent06()
{
    int userChosenID06;
    printf("\n Type the agend ID5 to be customized = \n");
    scanf("%d", &userChosenID06);
    struct assassin06 *updateAux06 = queueStart06;

    while (updateAux06 != NULL)
    {
        if (userChosenID06 == updateAux06->agentlvl6ID)
        {
            printf("\n Insert the new data06: Rubyballers quantity? | Rubyballers damage? | Knife quantity? | Knife damage? \n");
            scanf("%d %f %d %f", &updateAux06->rubyballersQuantity, &updateAux06->rubyballersDamage, &updateAux06->knifeQuantity, &updateAux06->knifeDamage);
        }
    }
}

// Coding is a PC game

void removeAgent()
{
    struct assassin *removeAux = queueStart;

    // Continue from here
}

void listAgents()
{
    struct assassin *listAux;
    while (listAux != NULL)
    {
        printf("\n Agent ID = %d | Silverballers quantity = %d | Silverballer damage = %f | Poison quantity = %d | Poison duration (In seconds) = %f \n", listAux->agentID, listAux->silverballers, listAux->silverballerDamage, listAux->poisonQuantity, listAux->poisonDuration);
        listAux = listAux->nextAgent;
    }
    if (totalAgents == 0)
    {
        printf("\n Error = The queue is empty. \n");
    }
}

int main(void)
{
    int userChoice;

    switch (userChoice)
    {
        userChoice = mainMenu();
    case 1:
        updateAgent();
        break;
    case 2:
        addAgent();
        break;
    case 3:
        removeAgent;
        break;
    case 4:
        listAgents();
        break;
    case -5:
        break;
    }
}