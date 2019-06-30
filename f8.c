#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct data
{
	int dia;
	int mes;
	int ano;
}Data;

typedef struct cliente
{
	int num;
	char nome[50];
    Data dat; 
    char  cpf[12];
    char sexo;
    struct cliente *prox;
}Cliente;

void cadClientes(Cliente *inicio);
void listClient(Cliente *inicio);


int main()
{
	int esc;;
	
	Cliente* clientInicio = (Cliente*) malloc(sizeof(Cliente));
	clientInicio->prox = NULL;
		
	while(esc != 0)
	{
		printf("Informe a opcao desejada: ");
		printf("\n\n");
		printf("0 - Encerrar: \n");
		printf("1-  Cadastrar Clientes: \n");
		printf("2 - Listar Clientes cadastrado: \n");
		printf("\n");
		scanf("%d",&esc);
		
		if(esc == 1)
		{
			cadClientes(clientInicio);
		}
		else if(esc == 2)
		{
			listClient(clientInicio);
		}else
		{
			if(esc ==0)
			{
				printf("Finalizando progama!\n");
			}else
			{
				printf("Digite um opção valida!\n");
			}
		}
	}
	
	return 0;
}
void cadClientes(Cliente *inicio){

	Cliente* tmp;
	Cliente* novo = (Cliente*) malloc(sizeof(Cliente));

	
	if(!novo)
	{
		printf("Sem memoria disponivel");
		exit(1);
	}
	
    printf("Informe um novo id do cliente: ");
    scanf("%d",&novo->num);
	getchar();

    printf("Informe o Nome do cliente.\n");
    fgets(novo->nome,50,stdin);
    size_t ln = strlen(novo->nome)-1;
    if(novo->nome[ln] == '\n')
    {
    	novo->nome[ln] ='\0';
    }

    printf("Informe o Sexo do cliente\n");
    scanf("%c",&novo->sexo);
    novo->sexo = toupper(novo->sexo);
    if(novo->sexo != 'M' && novo->sexo != 'F')
    {
    	printf("Sexo invalido!\n");
    	exit(1);
    }
    getchar();        
         
    printf("Informe o CPF do cliente.\n");
    fgets(novo->cpf,12,stdin);
    getchar();
      
    printf("Informe o dia de Nascimento do cliente.\n");
    scanf("%d",&novo->dat.dia);
        
    printf("Informe o mês de Nascimento do cliente.\n");
    scanf("%d",&novo->dat.mes);

    printf("Informe o ano de Nascimento do cliente.\n");
    scanf("%d",&novo->dat.ano);

	novo->prox = NULL;

    if(inicio->prox == NULL)
    {
        inicio->prox = novo;
    }else
    {
    	tmp = inicio->prox;
    	while(tmp->prox != NULL)
    	{
    		tmp = tmp->prox;
    	}
    	tmp->prox = novo;
    }
}


void listClient(Cliente* inicio)
{
	Cliente* aux;
	aux = inicio->prox;
		
	
	while(aux->prox != NULL)
	{
		printf("\nNome: %s, sexo: %c,CPF: %s, Data Nascimento:  %d/%d/%d\n",aux->nome,aux->sexo,aux->cpf,aux->dat.dia,aux->dat.mes, aux->dat.ano);
		aux = aux->prox;
	}
    
    printf("\nNome: %s\nSexo: %c\nCPF: %s\nData Nascimento:  %d/%d/%d\n",aux->nome,aux->sexo,aux->cpf,aux->dat.dia,aux->dat.mes, aux->dat.ano);
    printf("\n\n");
	aux = aux->prox;

}