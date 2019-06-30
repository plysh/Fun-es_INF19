// 2/] Lista funções.

#include <stdio.h>
#include <stdlib.h>

int subt(int a, int b,int c);

int main(){
    int vl1,vl2,vl3;
    printf("Digite três numeros a ser subtraido na funcao.\n");
    scanf("%d",&vl1);
    scanf("%d",&vl2);
    scanf("%d",&vl3);
    
   printf("%d - %d - %d  = %d .\n",vl1,vl2,vl3, subt(vl1,vl2,vl3));
   
   return 0;
}

int subt(int a,int b,int c){
   int sub=a-b-c;
   return sub;
}
