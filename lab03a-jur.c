/*
    Nome: Juliana de Oliveira Rodrigues
    RA: 171196
    Laboratorio 03a - Admiravel Mundo Novo

*/

#define MAX 100
#include <stdio.h>


int main() {

    char lote[MAX];
    int casta[MAX], l, i, n = 0, individuos = 0;
    int numero_de_lotes, numero_de_castas;

    /* Inicializa o vetor com zeros */
    for(i = 0; i < MAX; i++)
        casta[i] = 0;

    /* Le o numero de lotes e o numero de castas */
    scanf("%d %d", &numero_de_lotes, &numero_de_castas);

    /* Para cada lote... */
    for(i=0;i<numero_de_lotes;i++) {

        /* Le a string correspondente ao lote */
        scanf("%s", lote);

        /* Itera pelos caracteres da string, soma um
           na posicao correspondente do array casta
           e soma um no numero de individuos         */

        for(l=0; lote[l] != 0; l++) {
            n = lote[l] - '0';
            casta[n-1]++;
            individuos++;
        }
    }

    /* Imprime o total de individuos */
    printf("Total: %d individuos\n", individuos);

    /* Itera pelo vetor casta e imprime seus valores */
    for (i=0; i<numero_de_castas; i++){
        printf("Total da casta %d: %d\n", i+1, casta[i]);
    }

    /* Itera pelo vator casta, calcula a porcentagem e
       imprime os valores */

    for (i=0; i<numero_de_castas; i++){
        double percentual = ((double) casta[i]/individuos)*100;
        printf("Percentual da casta %d: %.2f\n", i+1, percentual);
    }

    return 0;

}
