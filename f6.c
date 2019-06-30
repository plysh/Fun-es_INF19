#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//exercicio 6 ,ler 3 letras via funcao e imprimir no main

char ler(char lr[]);

int main(){
    printf("O progama a seguir pedirá 3 letras a ser lida.\n");
    char ch[4];
    ler(ch);
    int i;
    for(i=0;i<3;i++){
        printf("\n %dº Letra: %c .",i+1,ch[i]);
    }
    printf("\n");
    return 0;
}

char ler(char lr[]){
     int i;
     for(i=0;i<3;i++){
         printf(" Digite a %dº letra.\n",i+1);
         scanf("%c",&lr[i]);
         getchar();
 
     }
}
