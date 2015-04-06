#include <stdio.h>
#include <string.h>

int main()
{
  /* N representa o numero de lotes e C o numero de castas */
  int n, c;
  int i, aux = 0, individuos = 0, criancas[10000];
  double porcentagem = 0;
  char nasc[1000];
  
  /* Inicializa o vetor crianca */
  for(i=0;i<10000;i++)
  {
    criancas[i] = 0;
  }
  
  /* Le N e C */
  scanf("%d %d", &n, &c);
  
  
  for(i=0;i<n;i++)
  {
    /* Adiciona ao indice do numero lido, no vetor crianca, mais 1 */
    scanf("%s", nasc);
    
    aux = 0;
    while(nasc[aux])
    {
      criancas[(int)(nasc[aux]%48)]++;
      aux++;
      individuos++;
    }
    scanf("");
  }
  
  printf("Total: %d individuos\n", individuos);
  
  for(i=0;i<c;i++)
  {
    printf("Total da casta %d: %d\n", i+1, criancas[i+1]);
  }
  
  for(i=0;i<c;i++)
  {
    porcentagem = (double) criancas[i+1] / individuos;
    printf("Percentual da casta %d: %.2lf\n", i+1, porcentagem * 100);
  }
  
  return 0;
}