#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING 100

void menuIniciarSessio () {
}


void menuRegistrar () {
}

int main () {
    char opt[MAX_STRING], h;

    printf("Benvingut a la aplicacio de l'empresa StellarSalleX\n");

    do{
        printf("\n\t1. Iniciar sessio\n");
        printf("\t2. Registrar-se\n");
        printf("\t3. Sortir\n");
        printf("Accedir: ");

        fgets(opt, MAX_STRING, stdin);
        opt[strlen(opt)-1] = '\0';

        if (strcmp(opt, "1") == 0) {
            menuIniciarSessio();
        }else if (strcmp(opt, "2") == 0) {
            menuRegistrar();
        }else if (strcmp(opt, "3") == 0) {
            printf("Has seleccionat sortir\n");
        }else {
            printf("Opcio incorrecta\n");
        }
    } while (strcmp(opt, "3") != 0);
    
    printf("Gracies per confiar en StellarSalleX, fins aviat\n");
    return 0;
}
