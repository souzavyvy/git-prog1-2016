#include<stdio.h>
int main()

{
    int i;
    float av1[10];
    float media, soma=0;
  
    
    for(i=0;i<=9;i++)
    {
        printf("\nEntre com a av1 do aluno%d:  ", i+1);
        scanf("%f", &av1[i]);
        soma = soma + av1 [i];
       
    }
    media =soma /10;
    printf ("\nMedia da turma= %f\n", media);
   
     printf("\n------------------------");
     printf("\nAlunos com nota >= media");
     for(i=0;i<=9;i++)
     {
         if(av1[i]>=media)
         {
             printf("\nAluno %d -> Nota =%f", i+1, av1[i]);
         }
     }
    return 0;
}