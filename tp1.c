#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){


return 0;
}

int largo(char* cadena){
    int i = 0;

    while (cadena[i]=! '\0')
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

void cadenaAMayusculas (char* cadena)
{
    int i = 0;
    while (cadena[i]=!'\0')
    {
        cadena[i]=toupper(cadena[i]);
        i++;
    }
}
