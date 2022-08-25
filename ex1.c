/*
Desenvolva um programa que ordene um vetor de 10 elementos de números inteiros,
mostre o vetor ordenado na tela,
e também o maior e o menor elemento desse vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void bsort(int vet[], int t);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vetor[10];
	
	printf("Vetor antes da ordenação: \n");
	for(i=0;i<10;i++){
		vetor[i] = rand() % 100; //cria vetor aleatorio de numeros entre 0 e 100.
		printf("%d ", vetor[i]);
	}
	printf("\n--------------------------------\n");
	
	bsort(vetor, 10); //Ordenação
	
	printf("Vetor depois da ordenação: \n");
	for(i=0;i<10;i++){
		printf("%d ", vetor[i]);
	}
	printf("\n--------------------------------\n");
	
	printf("O maior número do vetor é: %d\n",vetor[9]);
	printf("O menor número do vetor é: %d",vetor[0]);
	
	return 0;
}


void bsort(int vet[], int t){
	int i,j,k=0;
	
	for(i=0;i<t-1;i++)
	{
		for(j=0;j<t-(i+1);j++)
		{
			if(vet[j] > vet[j+1])
			{
				k=vet[j];
				vet[j]=vet[j+1];
				vet[j+1]=k;
			}
		}
	}
}
