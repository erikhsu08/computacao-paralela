#include <stdio.h>
#include <stdlib.h>

/*
função printaVetor
parametros
vet: vetor a ser printado
len: tamanho do vetor

a função printa o vetor
*/
void printaVetor(int*vet, int len)
{
  printf("[");
  for(int i = 0; i<len; i++)
    {
      printf(" %d ", vet[i]);
    }
  printf("]\n");
}

/*
função calculaLinha
parametros
A: matriz A
B: vetor B
vet: vetor resultado
i: indice da linha
len: tamanho do vetor

a função multiplica a linha i da matriz A pelo vetor B e armazena a soma no vetor resultado
*/
void calculaLinha(int* A, int* B, int* vet, int i, int len)
{
  for(int j =  0; j < len; j++)
  {
    vet[i] += A[j] * B[j];
  }
  //printaVetor(vet, len);
}

int main(void) 
{
  int n = 200; // tamanho
  
  int **A = malloc(n * sizeof (int *)); //matriz
  int *B = malloc(n * sizeof (int)); //vetor 
  int *vet = malloc(n * sizeof (int)); //vetor resultado
  for (int i = 0; i < n; i++)
  {
    B[i] = 1;
    vet[i] = 0;
    A[i] = malloc(n * sizeof (int));
    for (int j = 0; j < n; j++)
    {
      A[i][j] = 1;
    }
  }
  
  for(int i = 0; i<n; i++)
  {
    calculaLinha(A[i], B, vet, i, n);
  }
  printaVetor(vet, n);
}
