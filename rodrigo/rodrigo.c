#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
    int rg;
    int cpf;
    struct pessoa *prox;
};

int totalPessoas = 0;
struct pessoa *topo;

int menu()
{
    int op;
    printf("\nDigite 1- Inserir, 5- Sair\n");
    scanf("%d, &op");
    return op;
}

void inserir()
{
    struct pessoa *aux = (struct pessoa *)malloc(sizeof(struct pessoa));
    printf("\nDigite o rg da pessoa\n");
    scanf("%d", &aux->rg);
    printf("\nDigite o cpf da pessoa\n");
    scanf("%d", &aux->cpf);
    if (totalPessoas == 0)
    {
        topo = aux;
    }
    else
    {
        aux->prox = topo;
        topo = aux;
    }
    totalPessoas++;
}

void listar()
{
    if (totalPessoas == 0)
    {
        printf("\nA pilha está vazia\n");
    }
    else
    {
        struct pessoa *aux= topo;
        while (aux != NULL)
        {
            printf("\n%d %d\n", aux->rg, aux->cpf);
            aux = aux->prox;
        }
    }
}

void remover()
{
    if(totalPessoas == 0)
    {
        printf("\nA pilha está vazia\n");
    }
    else
    {
        struct pessoa *aux= topo->prox;
        free(topo);
        topo= aux;
        totalPessoas --;
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
        else if (op ==3)
        {
            remover();
        }
    } while (op != 5);

    return 0;
}