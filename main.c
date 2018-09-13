#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
    int n1, n2, n3;
};


/*
 * Lendo valores do arquivo binário criado no exercício anterior
 * */
int main()
{
    int n;
    struct threeNum num;
    FILE *fptr;

    if ((fptr = fopen("program.bin","rb")) == NULL){
        printf("Erro ao abrir o arquivo.");

        // Programa irá terminar caso não consiga abrir o arquivo.
        exit(1);
    }

    for(n = 1; n < 5; ++n)
    {
        fread(&num, sizeof(struct threeNum), 1, fptr);
        printf("n1: %d\tn2: %d\tn3: %d", num.n1, num.n2, num.n3);
    }
    fclose(fptr);

    return 0;
}