#include <stdio.h>
void convertirCadenaMayusculas(char*);
int largo(char*);
int stringAInt(char*);
int charAInt(char);
void eliminarCaracter(char*, char);
void agregarCaracter (char*, char, int, char*);
void concatenarCadenas(char*, char*, char*);

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
        for (int i = 0; i < potencia; i++){
            resultado *= numero;
        }
    }
    return resultado;
}

int charAInt(char caracter){
    return caracter - 48;
}

int stringAInt(char* cadena){
    int equivalenteInt = 0;
    int i=0;
    int numero;
    int decena = 0;
    int largoCadena = largo(cadena);
    for(i=largoCadena-1; i>=0; i--){   
        numero = charAInt(cadena[i]);
        equivalenteInt += numero * potencia(10, decena);
        decena++;
    }

    return equivalenteInt;
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

void concatenarCadenas (char* cadena1, char* cadena2, char* cadenaFinal){

    int i = 0, j = 0;

    while (cadena1[i] != '\0')
    {
        cadenaFinal[i] = cadena1[i];
        i++;
    }
    
    while (cadena2[j] != '\0')
    {
        cadenaFinal[i] = cadena2[j];
        i++;
        j++;
    }

    cadenaFinal[i + j] = '\0';
    
}

void agregarCaracter (char* cadena, char caracter, int posicion, char* cadenaFinal) {

    int i = 0, j = 0, largoCadena = largo(cadena);

    while (i < largoCadena+1)
    {
        if(i == posicion-1){
            cadenaFinal[i] = caracter;
            i++;

        }
        else
        {
            cadenaFinal[i] = cadena[j];
            i++;
            j++;
        }
        
    }

    cadenaFinal[i] = '\0';

}