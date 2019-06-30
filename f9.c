
/*#include <stdio.h>
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
	char nome[20];
    Data dat; 
    char  cpf[12];
    char sexo;
    struct cliente *prox;
}Cliente;

void cadClientes(Cliente *inicio);
void listClient(Cliente *inicio);
int validNome(int nme );
int validSexo(int sex);
int validNasc(int nasc);
int valCpf(int cpf);

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
    int valNm,vSx;
    int valDate
	
	if(!novo)
	{
		printf("Sem memoria disponivel");
		exit(1);
	}
	
    printf("Informe um novo id do cliente: ");
    scanf("%d",&novo->num);
	getchar();

    do
    {

        printf("Informe o Nome do cliente.\n");
        fgets(novo->nome,20,stdin);
        size_t ln = strlen(novo->nome)-1;
        if(novo->nome[ln] == '\n')
        {
    	novo->nome[ln] ='\0';
        }
    }while(valNm == -1);

    printf("Informe o Sexo do cliente\n");
    scanf("%c",&novo->sexo);
    novo->sexo = toupper(novo->sexo);
    getchar();        
     
    do
    {

       printf("Informe o CPF do cliente.\n");
       fgets(novo->cpf,12,stdin);
       getchar();
    }while(valCpf == -1);  
    
    do
    {

       printf("Informe o dia de Nascimento do cliente.\n");
       scanf("%d",&novo->dat.dia);
        
       printf("Informe o mês de Nascimento do cliente.\n");
       scanf("%d",&novo->dat.mes);

       printf("Informe o ano de Nascimento do cliente.\n");
       scanf("%d",&novo->dat.ano);

       valDate = validarData(novo->dt.dia,novo->dt.mes,novo->dt.ano);
       if(valDate == -1)
		{
			printf("\nERRO !!! DATA INVALIDA!\n");
        	printf("INFORME UM DATA VALIDA\n\n");
		}

    }while(valDate == -1);    

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

int validNome(*name)
{
	char i;
    int vl;;
    i = strlen(*name);
    vl = (int)i 
   	
   	return vl;  
}

int validSexo(*sex)
{
	int vl;
    if(*sexo != 'M' && *sexo != 'F')
    {
    	printf("Sexo invalido!\n");
    	 vl = 0;
    }
    vl = 2;
    return vl;
}
int validNasc( int dia,int mes,int ano)
{
  if((ano % 4 == 0) && (ano % 100 != 0) && (ano % 400 == 0))
	{
		if(mes == 2)
		{
			if((dia >= 1) && (dia <= 29))
			{
				return 1;
			}
			else if((mes == 1) && (mes == 3) && (mes == 5) && (mes == 7) && (mes == 8) && (mes == 10) && (mes == 12))
			{
				if((dia >=1) && (dia <= 31))
				{
					return 1;
				}
				else
				{
					return -1;
				}
			}
			else
			{
				if((dia >= 1) && (dia <= 30))
			{
					return 1;
				}
				else
				{
					return -1;
				}
			}
		}
	
	}
	else
	{
		if((mes == 1) && (mes == 3) && (mes == 5) && (mes == 7) && (mes == 8) && (mes == 10) && (mes == 12))
		{
			if((dia >=1) && (dia <= 31))
			{
				return 1;
			}
			else
			{
				return -1;
			}
		}
		else
		{
			if((dia >= 1) && (dia <= 30))
			{
				return 1;
			}
			else
			{
				return -1;
			}
		}
	}
}
}
*/
/*
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
char nome[20];
    Data dat;
    char  cpf[12];
    char sexo;
    struct cliente *prox;
}Cliente;

void cadClientes(Cliente *inicio);
void listClient(Cliente *inicio);
int validNome(char nme );
int validSexo(char sex);
int validNasc(int dia,int mes ,int ano);
int valCpf(int cpf);


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
void cadClientes(Cliente *inicio)
{

Cliente* tmp;
Cliente* novo = (Cliente*) malloc(sizeof(Cliente));
    int valNm,vSx;
    int valDate,valCpf;

if(!novo)
{
printf("Sem memoria disponivel");
exit(1);
}

    printf("Informe um novo id do cliente: ");
    scanf("%d",&novo->num);
getchar();

    do
    {

        printf("Informe o Nome do cliente.\n");
        fgets(novo->nome,20,stdin);
        size_t ln = strlen(novo->nome)-1;
        if(novo->nome[ln] == '\n')
        {
    novo->nome[ln] ='\0';
        }
    }while(valNm == -1);
    do{
    printf("Informe o Sexo do cliente\n");
    scanf("%c",&novo->sexo);
    novo->sexo = toupper(novo->sexo);
    getchar();
    vsx = validSexo(novo->sexo);
    while(vsx !)
    do
    {

       printf("Informe o CPF do cliente.\n");
       fgets(novo->cpf,12,stdin);
       getchar();
    }while(valCpf == -1);  
   
    do
    {

       printf("Informe o dia de Nascimento do cliente.\n");
       scanf("%d",&novo->dat.dia);
       
       printf("Informe o mês de Nascimento do cliente.\n");
       scanf("%d",&novo->dat.mes);

       printf("Informe o ano de Nascimento do cliente.\n");
       scanf("%d",&novo->dat.ano);

       valDate = validNasc(novo->dat.dia,novo->dat.mes,novo->dat.ano);
       if(valDate == -1)
{
printf("\nERRO !!! DATA INVALIDA!\n");
        printf("INFORME UM DATA VALIDA\n\n");
}

    }while(valDate == -1);    

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

int validNome(char nme)
{
char i;
    int vl;
    i = sizeof(nme);
    vl = (int)i ;
   
    return vl;  
}

int validSexo( char sex)
{
int vl;
    if(sex != 'M' && sex != 'F')
    {
    printf("Sexo invalido!\n");
    vl = 0;
    }
    vl = 1;
    return vl;
}
int validNasc( int dia,int mes,int ano)
{
  int ret;
  if((ano % 4 == 0) && (ano % 100 != 0) && (ano % 400 == 0))
{
if(mes == 2)
{
if((dia >= 1) && (dia <= 29))
{
ret= 1;
}
else if((mes == 1) && (mes == 3) && (mes == 5) && (mes == 7) && (mes == 8) && (mes == 10) && (mes == 12))
{
if((dia >=1) && (dia <= 31))
{
ret = 1;
}
else
{
ret =-1;
}
}
else
{
if((dia >= 1) && (dia <= 30))
{
ret = 1;
}
else
{
ret = -1;
}
}
}

}
else
{
if((mes == 1) && (mes == 3) && (mes == 5) && (mes == 7) && (mes == 8) && (mes == 10) && (mes == 12))
{
if((dia >=1) && (dia <= 31))
{
ret = 1;
}
else
{
ret = -1;
}
}
else
{
if((dia >= 1) && (dia <= 30))
{
ret = 1;
}
else
{
ret = -1;
}
}
}
  return ret ;
}
*/



  /******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
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
  char nome[20];
  Data dat;
  char  cpf[12];
  char sexo;
  struct cliente *prox;
}Cliente;

void cadClientes(Cliente *inicio);
void listClient(Cliente *inicio);
int validNome(char nme );
int validSexo(char sex);
int validNasc(int dia,int mes ,int ano);
int valCpf(int cpf);


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


void cadClientes(Cliente *inicio)
{

   Cliente* tmp;
   Cliente* novo = (Cliente*) malloc(sizeof(Cliente));
   int valNm,vSx;
   int valDate,valCpf;

   if(!novo)
   {
      printf("Sem memoria disponivel");
      exit(1);
   }

   printf("Informe um novo id do cliente: ");
   scanf("%d",&novo->num);
   getchar();

   do
   {

        printf("Informe o Nome do cliente.\n");
        fgets(novo->nome,20,stdin);
        size_t ln = strlen(novo->nome)-1;
        if(novo->nome[ln] == '\n')
        {
           novo->nome[ln] ='\0';
        }
    }while(valNm == -1);

    do
    {
        printf("Informe o Sexo do cliente\n");
        scanf("%c",&novo->sexo);
        novo->sexo = toupper(novo->sexo);
        getchar();
        vSx = validSexo(novo->sexo);
    }while(vSx !=1);

    do
    {

       printf("Informe o CPF do cliente.\n");
       fgets(novo->cpf,12,stdin);
       getchar();
    }while(valCpf == -1);  
   
    do
    {

       printf("Informe o dia de Nascimento do cliente.\n");
       scanf("%d",&novo->dat.dia);
       
       printf("Informe o mês de Nascimento do cliente.\n");
       scanf("%d",&novo->dat.mes);

       printf("Informe o ano de Nascimento do cliente.\n");
       scanf("%d",&novo->dat.ano);

       valDate = validNasc(novo->dat.dia,novo->dat.mes,novo->dat.ano);
       if(valDate == -1)
       {
          printf("\nERRO !!! DATA INVALIDA!\n");
          printf("INFORME UM DATA VALIDA\n\n");
       }
    }while(valDate == -1);    

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


void listClient(Cliente *inicio)
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

int validNome(char nme)
{
      char i;
      int vl;
      i = sizeof(nme);
      vl = (int)i ;
      printf("%d\n",vl );
      return vl;  
}

int validSexo( char sex)
{
    int vl;
    if(sex != 'M' && sex != 'F')
    {
       printf("Sexo invalido!\n");
       vl = 0;
    }
    vl = 1;
    return vl;
}

int validNasc( int dia,int mes,int ano)
{
  int ret;
  
  if((ano % 4 == 0) && (ano % 100 != 0) && (ano % 400 == 0))
	{
		if(mes == 2)
		{
			if((dia >= 1) && (dia <= 29))
			{
				ret = 1;
			}
			else if((mes == 1) && (mes == 3) && (mes == 5) && (mes == 7) && (mes == 8) && (mes == 10) && (mes == 12))
			{
				if((dia >=1) && (dia <= 31))
				{
					ret = 1;
				}
				else
				{
					ret =  -1;
				}
			}
			else
			{
				if((dia >= 1) && (dia <= 30))
			{
					ret = 1;
				}
				else
				{
					ret -1;
				}
			}
		}
	
	}
	else
	{
		if((mes == 1) && (mes == 3) && (mes == 5) && (mes == 7) && (mes == 8) && (mes == 10) && (mes == 12))
		{
			if((dia >=1) && (dia <= 31))
			{
				ret = 1;
			}
			else
			{
				ret =  -1;
			}
		}
		else
		{
			if((dia >= 1) && (dia <= 30))
			{
				ret =  1;
			}
			else
			{
				ret = -1;
			}
		}
	}

  return ret ;
}





  
	
	
	



  
