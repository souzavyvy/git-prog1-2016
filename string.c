#include<stdio.h>
/*Faça um programa para ler um nome, av1 e av2.
Calcule a media e informe como exemplo:
Qual o seu nome: Fulano
Entre com av1: 6.6
Entre com av2: 6.6
Ola Fulano, sua media = 6.6*/

int main()

{ 
    char nome[10];
    float av1, av2, media;
    
    printf("\nEntre com nome: ");
    scanf("\n%s", nome);
    
    printf("\nEntre com av1:");
    scanf("\%f", &av1);
    
    printf("\nEntre com av2:");
    scanf("\%f", &av2);
    
    
    return 0;
}
