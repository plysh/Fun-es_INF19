#include <stdio.h>
#include <stdlib.h>
// exercico 5 da lista de funcoes ,passa 4 numero  pra main por struct

struct ler{
  int vt[4];
};

int main(){
   printf("Digite 4 numeros que serao passados via estruct.\n");
   struct ler num;
   int i,nm;
   for(i=0;i<4;i++){
       printf("Digite o numero %d .\n",i+1);
       scanf("%d",&nm);
       num.vt[i]=nm;

   }
   printf("Os numeros digitados foram.\n");
   for(i=0;i<4;i++){
       printf("O numero %d é: %d .\n",i+1,num.vt[i]);
   }
}
