#include <stdio.h>
#include <stdlib.h>

int fat(int *svl);
int main()
{
    int vl1,ft,*pt,aux,i,vlp=0;
    printf("Digite um numero a ser fatorado.\n");
    scanf("%d",&ft);
    vl1 = ft;
    pt = &ft;
    aux = fat(pt);

    if( ft == -1)
    {
        printf("Valor não fatorado, menor ou igual a 2 .\n ");  
    } 
    else
    {
        printf("O fatorial de %d: %d , vl orig %d.\n",vl1,*pt,ft);  
    }
  
    
    return 0;
}

int fat(int *vl)
{

    int vlp,i,ft;
    vlp = *vl;
    if(vlp <= 2)
    {
       printf(" O numero %d não pode ser fatorado! \n",*vl);
       ft= -1; 
    }  
    else
    {
       if(vlp >= 0)
       {
          ft = 1;
          while(vlp > 0)
          {
               ft *= vlp;
               vlp--;
          }
       }
    }
    *vl=ft;  
      
    return ft;

 }




