#include <stdio.h>


/* Functions */
void convertirCadenaMayusculas(char* cadena);
int largo(char* cadena);
int stringAInt(char* cadena);
int charAInt(char caracter);
void eliminarCaracter(char* cadena, char caracter);

/*
int main(){
    Cadena de prueba para las funciones 
    char* cadena = "computacion";
    char caracter = "c";

    eliminarCaracter(cadena, caracter);

    return 0;
}
*/

int main() {
    char cadena[100], caracter;

    printf("Ingrese la cadena: ");
    gets(cadena);

    printf("Ingrese el caracter que desea eliminar: ");
    scanf("%c", &caracter);

    eliminarCaracter(cadena, caracter);

    printf("La cadena resultante es: %s\n", cadena);

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

int potencia(int numero, int potencia){
    int resultado = 1;
    if (potencia != 0){
        for (int i = 0; i <= potencia; i++){
            resultado *= numero;
        }
    }
    return resultado;
}

int stringAInt(char* cadena){
    int equivalenteInt = 0;
    int i=0;
    int numero;
    int decena = 0;
    int largoCadena = largo(cadena);
    for(i=largoCadena-1; i>0; i--){   
        numero = charAInt(cadena[i]);
        equivalenteInt += numero * potencia(10, decena);
        decena++;
    }

    return equivalenteInt;
}

int charAInt(char caracter){
    return caracter - 48;
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

void eliminarCaracter(char* cadena, char caracter) {
    int i, j = 0;

    for (i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] != caracter) 
        {
            cadena[j++] = cadena[i];
        }   
    }
    cadena[j] = '\0';
}