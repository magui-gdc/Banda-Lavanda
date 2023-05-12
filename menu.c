#include <stdio.h>
#include <ctype.h>
#include "tp1.c"

int main() {

    int opcion;
    char* cadena;

    menu:
    cadena = NULL;
    printf("\n\n\n INGRESAR OPCION: \n");
    printf("\n 1. Calcular longitud.");
    printf("\n 2. Calcular equivalente numerico.");
    printf("\n 3. Conviertir a mayusculas.");
    printf("\n 4. Eliminar caracter dado.");
    printf("\n 5. Concatenar dos cadenas.");
    printf("\n 6. blabalbalbalbblablabla. ");
    printf("\n 7. Salir del programa. \n\n\n");

    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("\nCALCULO DE LONGITUD\nIngrese cadena:\n");
        scanf(" %c", cadena);
        printf("El largo es: \n");
        printf("%d", largo(cadena));
        goto menu;
    
    case 2:
        printf("\nCALCULO DE EQUIVALENTE NUMERICA\nIngrese cadena:");
        scanf(" %c", &cadena);
        printf("%d", stringAInt(cadena));
        goto menu;

    case 3:
        printf("%d", funcionPrueba());
    case 7:
        return 0;
    }


    

}