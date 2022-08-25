/*
Desenvolve um programa que receba o nome de 5 alunos,
e mostre os nomes em ordem crescente na tela.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

void bubbleSort(char (*V)[30], int Fim);

int main(){
    setlocale(LC_ALL, "PORTUGUESE");
    int i=0;
    char V[5][30];

    for(i=0; i<5; i++)
    {
        printf("\nDigite o nome da %dº pessoa: ", i+1);
        scanf("%s", V[i]);
	}


    printf("\n\n\n Nomes Ordenados: \n");
    for(i=0; i<5; i++)
    {
        bubbleSort(V, 5);
        printf("\n %s", V[i]);      
    }
    
    return 0;
}

void bubbleSort(char (*V)[30], int Fim){
    int i, j;
    char temp[30];
 
    for(i=0; i<5; i++)
    {
        for(j=0; j<5 - 1 - i; j++)
        {
            if(strcmp(V[j], V[j+1]) > 0)
            {
                strcpy(temp, V[j]);
                strcpy(V[j], V[j+1]);
                strcpy(V[j+1], temp);
            }
        }
    }
}
