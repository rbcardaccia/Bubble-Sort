#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(int argc, char** argv) {
    int i, j, temp, v[N];
    for(i = 0; i < N; i++) {
        printf("Inserisci il numero in posizione %d : ", i);
        scanf("%d", &(v[i]));
       }
    for(i = 0; i < (N-1); i++) {
        for(j = 0; j < (N-1-i); j++) {
            if(v[j] > v[j+1]) {
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
                
    }
    printf("Algoritmo ordinato: \n");
    for(i = 0; i < N; i++) {
        printf("%d ", v[i]);
    }   
    return (EXIT_SUCCESS);
}