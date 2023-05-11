#include <stdio.h>
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

<<<<<<< HEAD
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
=======
int potencia(int numero, int potencia){
    int resultado = 1;
    if (potencia != 0){
        for (int i = 0; i <= potencia; i++){
            resultado *= numero;
        }
    }
    return resultado;
}

void cadenaAMayusculas (char* cadena)
{
    int i = 0;
    while (cadena[i]=!'\0')
    {
        cadena[i]=toupper(cadena[i]);
        i++;
>>>>>>> 0220cd27cb58b1dbcaf5f357b827364df0c741db
    }
    printf("Hola 2");
}
