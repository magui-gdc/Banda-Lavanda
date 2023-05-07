#include <stdio.h>
#include <math.h>

int main(){


return 0;
}

int largo(char* cadena){
    int i = 0;

    while (cadena[i]=! "/0")
    {
        i++;
    }
    return i;
}

int stringAInt(char* cadena){
    int equivalenteInt = 0;
    int i=0;
    int numero;
    while (cadena[i]=! "/0")
    {   
        numero = charAInt(cadena[i]);
        equivalenteInt += numero * pow(10, i);
        i++;
    }

    return equivalenteInt;
}

int charAInt(char caracter){
    return caracter - 48;
}