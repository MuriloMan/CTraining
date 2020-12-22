#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
    int id;
    int rg;
    int cpf;
    struct pessoa *prox;
};

int totalPessoas = 0;
int codPessoa = 1;
struct pessoa *topo;

int menu()
{
    int op;
    printf("\nDigite 1- Inserir,2- Listar, 3- Remover, 4- Atualizar, 5- Sair\n");
    scanf("%d, &op");
    return op;
}

void inserir()
{
    struct pessoa *aux = (struct pessoa *)malloc(sizeof(struct pessoa));
    aux->id= codPessoa;
    codPessoa ++;
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
        struct pessoa *aux = topo;
        while (aux != NULL)
        {
            printf("\n%d %d\n", aux->rg, aux->cpf);
            aux = aux->prox;
        }
    }
}

void remover()
{
    if (totalPessoas == 0)
    {
        printf("\nA pilha está vazia\n");
    }
    else
    {
        struct pessoa *aux = topo->prox;
        free(topo);
        topo = aux;
        totalPessoas--;
    }
}

void atualizar()
{
    struct pessoa *aux= topo;
    int cod;
    printf("\nDigite o código da pessoa a ser editada:\n");
    scanf("%d", &cod);
    while (aux != NULL)
    {
        if(aux->id == cod)
        {
            printf("\nDigite o rg:\n");
            scanf("%d", &aux->rg);
            printf("\nDigite o cpf:\n");
            scanf("%d", &aux->cpf);
            aux= NULL;
        }
        else
        {
            aux= aux->prox;
        }
        
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
            remover();
        }
        else if (op == 4)
        {
            atualizar();
        }
    } while (op != 5);

    return 0;
}