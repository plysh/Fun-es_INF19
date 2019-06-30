
 //  1º Lista funções. 

#include <stdio.h>
#include <stdlib.h>
int soma(int x,int y);

int main()
{
    int n1,n2,vl;
    printf("Digite dois valores a ser passado para a funcao soma\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
  
    printf("A soma de %d + %d = %d.\n",n1,n2,soma(n1,n2));
    return 0;
}

int soma(int x,int y){
    int sm=0;
    sm= x+y;

     return sm;
}
