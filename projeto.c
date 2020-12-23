//CODE
//Criar uma pilha
//Alison faz o struct, listar e criar
//Rodrigo faz o main, Atualizar e deletar
//Necessário fazer tudo e comitar depois, só imaginando como será o trabalho do outro

#include <stdio.h>
#include <stdlib.h>

struct time
{
    int timeId;
    int titulosNacionais;
    int titulosInternacionais;
    struct time *prox;
};

int totalTimes = 0;
int codTime = 1;
struct time *topo;

int menu()
{
    int op;
    printf("\nDigite 1- Inserir, 2 - Listar, 3- Remover, 4- Atualizar, 5- Sair\n");
    scanf("d", &op);
    return op;
}

void atualizar()
{
    struct time *aux = topo;
    int cod;
    printf("\nDigite o código do time a ser editado: \n");
    scanf("%d", &cod);
    while (aux != NULL)
    {
        if (aux->timeId == cod)
        {
            printf("\nDigite o número de títulos nacionais:\n");
            scanf("%d", &aux->titulosNacionais);
            printf("\nDigite o numero de títulos internacionais:\n");
            scanf("%d", &aux->titulosInternacionais);
            aux = NULL;
        }
        else
        {
            aux = aux->prox;
        }
    }
}

void deletar()
{
    if (totalTimes == 0)
    {
        printf("\nA pilha está vazia\n");
    }
    else
    {
        struct time *aux = topo->prox;
        free(topo);
        topo = aux;
        totalTimes--;
    }
}

int main()
{
    int op;
    do
    {
        op = menu();
        if (op == 1)
        {
            inserir();
        }
        else if (op == 2)
        {
            listar();
        }
        else if (op == 3)
        {
            deletar();
        }
        else if (op == 4)
        {
            atualizar();
        }
    } while (op != 5);

    return 0;
}

//CODE