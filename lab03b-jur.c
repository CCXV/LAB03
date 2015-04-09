/*
    Nome: Juliana de Oliveira Rodrigues
    RA: 171196
    Laboratorio 03b - O Enigma dos Guardioes Quanticos

*/

#define MAX 101
#include <stdio.h>

int main() {

    int numero_de_guardioes, guardiao_sincero, guardiao = 1;
    int inicio, fim, m_q = 0, m_o = 0;
    int intervalo[MAX], registro[MAX][2];
    int i, k, l;

    /* Popula o vetor Invervalo */
    for (i = 0; i < MAX; i++)
        intervalo[i] = 0;


    /* Le o numero de guardioes */
    scanf("%d", &numero_de_guardioes);

    /* Para cada guardiao, le o intervalo */
    for (i = 0; i < numero_de_guardioes; i++) {

        scanf("%d %d", &inicio, &fim);

        /* Armazena o intervalo no vetor registro */
        registro[i][0] = inicio;
        registro[i][1] = fim;

        /* Soma ao vetor intervalo o intervalo dado pelo guardiao */
        for (k = inicio; k <= fim; k++)
            intervalo[k]++;

    }

    /* Para cada entrada do vetor intervalo, determina a maior cujo
       valor eh igual ao indice  */
    for (l = 0; l < MAX; l++) {
        if (intervalo[l] >= m_q && intervalo[l] == l) {
            m_q = intervalo[l];
            m_o = l;
        }
    }

    /* Para cada guardiao, procura no registro primeiro que eh sincero */
    for (i=0; i < numero_de_guardioes; i++) {
        if (registro[i][0] <= m_o && m_o <= registro[i][1] && guardiao) {
            guardiao_sincero = i+1;
            guardiao = 0;
        }
    }

    /* Imprime o numero de guardioes sinceros e o primeiro sincero */
    printf("Numero de guardioes sinceros = %d\n", m_q);
    printf("Guardiao %d\n", guardiao_sincero);

    return 0;
}
