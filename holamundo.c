#include <stdio.h>

int main () {

    char nombre [100];
    printf(" escribe tu nombre !\n");
    /* leemos el teclado */
    scanf("%s", nombre); 
     /* imprimimos en pantlla */
    printf("canta ya %s!\n",nombre);

    return 0;
}
