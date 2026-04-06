#include <stdio.h>
#include <stdlib.h>

int main(int nro_arg, char *arg[]) {
    if (nro_arg < 3) {
        printf("Uso: %s num1 num2\n", arg[0]);
        return 1;
    }

    int v1 = atoi(arg[1]);
    int v2 = atoi(arg[2]);

    int suma = v1 + v2;

    printf("%d + %d = %d\n", v1, v2, suma);

    return 0;
}