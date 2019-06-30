#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Exercicio 07 da lista de funcao ,ler 3 palavras e imprimir via main

typedef struct plv
{
   char pl1[20];
   char pl2[20];
   char pl3[20];
}Plv;

 void palavras( char *plvr);

int main ()
{
   char vt[50];
  
     printf("Digite 3 palavra de até 20 caracteres.\n");
     palavras(vt);
     printf("impressa via funcão: %s.",vt );
 
} 

 void palavras(char *plvr)
{
    fgets(plvr,50,stdin);
  
}
