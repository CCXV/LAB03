/* Yuri Manzano Costa
 * RA 178834
 * Ciencia da computacao - Guardioes Quanticos LAB03B
 */

#include <stdio.h>
#define MAX 101
#define MIN 1

int main()
{
  int n, a[MAX],b[MAX];
  int ocorrencia[MAX], maior_ocorrencia = MIN, condicao_true = 0, primeira_ocorrencia[MAX], indice,i,j;
  
  /* Inicializa os vetores */
  for(i=0;i<MAX;i++)
  {
    primeira_ocorrencia[i]=0;
    ocorrencia[i] = 0;
  }
  
  /* Entrada */
  scanf("%d", &n);
  
  for(i=0;i<n;i++)
  {
    
    /* Le os intervalos */
    scanf("%d %d", &a[i], &b[i]);
    
    for(j=a[i];j<=b[i];j++)
    {
      /* Guarda quando a ocorrencia foi lida pela primeira vez */
      if(primeira_ocorrencia[j] == 0)
      {
	primeira_ocorrencia[j] = i+1;
	//printf("PO = %d\n\n",primeira_ocorrencia[j]);
      }
      
      /* Guarda a ocorrencia de guardiõies verdadeiros */
      if(j != 0)
      {
	ocorrencia[j]++; 
	//printf("O[%d] = %d\n",j,ocorrencia[j]);
      }
    }
  }
  
  for(i=0;i<n;i++)
  {
    for(j=a[i];j<=b[i];j++)
    {
      
      /* Calcula a maior ocorrencia caso ela obedeca a condicao
       * vet[n] == n
       */
      if(ocorrencia[j] >= maior_ocorrencia && ocorrencia[j] == j)
      {
	maior_ocorrencia = ocorrencia[j];
	condicao_true = j;
	}
    }
  }
  
  /* Acha quando a condicao verdadeira apareceu pela primeira vez */
  indice = primeira_ocorrencia[condicao_true];

  /* Saida */
  printf("Numero de guardioes sinceros = %d\nGuardiao %d\n", condicao_true, indice);
  
  return 0;
}