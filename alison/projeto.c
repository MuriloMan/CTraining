//CODE
//Criar uma pilha
//Alison faz o struct, listar e criar
//Rodrigo faz o main, Atualizar e deletar
//Necessário fazer tudo e comitar depois, só imaginando como será o trabalho do outro

#include <stdio.h>
#include <stdlib.h>

// Alison part = A point = Start

struct godOfWar
{
    struct godOfWar *nextPointer;
    int charID;
    int swordsNumber;
    int axesNumber;
    float swordDamage;
    float axeDamage;
};

struct godOfWar *topPointer;

int totalChars = 0;
int lastCharID = 1;

void create()
{
    struct godOfWar *createAux = (struct godOfWar *)malloc(sizeof(struct godOfWar));
    createAux->charID = lastCharID;
    lastCharID++;
    printf("\n Aviso = Insira os 4 valores apos a mensagem solicitando os valores dos itens \n");
    printf("\n Quantidade de espadas? | Dano da espada? | Quantidade de machados? | Dano do machado? \n");
    scanf("%d %f %d %f", &createAux->swordsNumber, &createAux->swordDamage, &createAux->axesNumber, &createAux->axeDamage);

    if (totalChars == 0)
    {
        topPointer = createAux;
    }
    else
    {
        createAux->nextPointer = topPointer;
        topPointer = createAux;
    }
    totalChars++;
}

void list()
{
    struct godOfWar *listAux = topPointer;
    while (listAux != NULL)
    {
        printf("\n ID do char = %d | Quantidade de espadas = %d | Dano da espada = %f | Quantidade de machados = %d | Dano do machado = %f \n", listAux->charID, listAux->swordsNumber, listAux->swordDamage, listAux->axesNumber, listAux->axeDamage);
        listAux = listAux->nextPointer;
    }
    if (totalChars == 0)
    {
        printf("\n Erro = A pilha está vazia. \n");
    }
}

void update()
{
    int customizationID;
    struct godOfWar *updateAux = topPointer;
    printf("\n Digite o código da personagem a ser atualizada: \n");
    scanf("%d", &customizationID);

    while (updateAux != NULL)
    {
        if (updateAux->charID == customizationID)
        {
            printf("\n Digite os dados para atualização: Numero de espadas? | Dano de espada? | Numero de machados? | Dano de machado? \n");
            scanf("%d %f %d %f", &updateAux->swordsNumber, &updateAux->swordDamage, &updateAux->axesNumber, &updateAux->axeDamage);
            updateAux = NULL;
        }
        else
        {
            updateAux = updateAux->nextPointer;
        }
    }
}

void delete ()
{
    if (totalChars == 0)
    {
        printf("\n Erro = A pilha está vazia \n");
    }
    else
    {
        struct godOfWar *deleteAux = topPointer;
        topPointer = deleteAux->nextPointer;
        free(deleteAux);
        totalChars--;
    }
}

int mainMenu()
{
    int userSelection;
    printf("\n Ola! Bem-vindo ao G.O.W.M.S. - Sistema de Gerenciamento do God of War \n");
    printf("\n Por gentileza, insira o valor referente a operação desejada = \n");
    printf("\n 1 = Adicionar(C) | 2 = Listar(R) | 3 = Atualizar(U) | 4 = Remover(D) | 5 = Sair \n");
    scanf("%d", &userSelection);
    return userSelection;
}

int main()
{
    int userChoice;

    while (userChoice != 5)
    {
        userChoice = mainMenu();

        switch (userChoice)
        {
        case 1:
            create();
            break;
        case 2:
            list();
            break;
        case 3:
            update();
            break;
        case 4:
            delete();
            break;
        case 5:
            break;
        }
    }
}

// Alison part = B point = End
