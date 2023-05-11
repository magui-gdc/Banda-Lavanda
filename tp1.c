#include <stdio.h>
#include <ctype.h>

/* Functions */
void convertirCadenaMayusculas(char* cadena);
int largo(char* cadena);
int stringAInt(char* cadena);
int charAInt(char caracter);
char* modificarCadena (char* cadena, char caracter, int posicion);

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

int potencia(int numero, int potencia){
    int resultado = 1;
    if (potencia != 0){
        for (int i = 0; i <= potencia; i++){
            resultado *= numero;
        }
    }
    return resultado;
}

void convertirCadenaMayusculas (char* cadena) {
    int largoCadena = largo(cadena);
    int i;
    for (i = 0; i <= largoCadena; i++) {
        if (cadena[i] >= 'a' && cadena[i] <= 'z') {
            cadena[i] = cadena[i] - 32;
        }
    }
}

char* modificarCadena (char* cadena, char caracter, int posicion) {
    int i = 0;
    int largoCadena = largo(cadena);
    for (i; i <= largoCadena; i++) {
        if (i == posicion - 1) {
            cadena[i] = caracter;
            break;
        }
    }
}