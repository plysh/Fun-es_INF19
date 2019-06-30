#include <stdio.h>
#include <stdlib.h>
// exercicio 4 da lista de funcoes ler tre numeros e passar via funcao

int ler(int lt[]);

int main(){

    int i,vt1[3];
    ler(vt1);
    for(i=0;i<3;i++){
        printf("O numero %d digitado foi %d.\n",i+1,vt1[i]);
    }


    return 0;
}

int ler(int lt[]){
    int i;
    for(i=0;i<3;i++){
         printf("Digite o numero %d.\n",i+1);
         scanf("%d",&lt[i]);
       ;
    }

}


