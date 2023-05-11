#include <stdio.h>
#include <math.h>
#include <ctype.h>

/* Functions */
void convertirCadenaMayusculas(char* cadena);
int largo(char* cadena);
int stringAInt(char* cadena);
int charAInt(char caracter);

int main(){
    /* Cadena de prueba para las funciones */
    char* cadena = "computacion";

    convertirCadenaMayusculas(cadena);

    return 0;
}


int largo(char* cadena){
    int i = 0;

    while (cadena[i] != '\0')
    {
        i++;
    }
    return i;
}

int stringAInt(char* cadena){
    int equivalenteInt = 0;
    int i=0;
    int numero;
    int decena = 0;
    int largoCadena = largo(cadena);
    for(i=largoCadena-1; i>0; i--){   
        numero = charAInt(cadena[i]);
        equivalenteInt += numero * pow(10, decena);
        decena++;
    }

    return equivalenteInt;
}

int charAInt(char caracter){
    return caracter - 48;
}

void convertirCadenaMayusculas (char* cadena) {
    printf("hola como andas");
    int largoCadena = largo(cadena);
    int i;
    for (i = 0; i <= largoCadena; i++) {
        printf("Hola soy del for");
        if (cadena[i] >= 'a' && cadena[i] <= 'z') {
            cadena[i] = cadena[i] - 32;
            printf("Hola 1");
        }
    }
    printf("Hola 2");
}
