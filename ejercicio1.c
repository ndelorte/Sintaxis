#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    int longi;
    
    printf("Calculadora de longitud de cadena\n Ingresa la cadena\n");
    fgets(str,sizeof(str),stdin);
    
    longi = strlen(str)-1;
    
    printf("La longitud de la cadena ingresada es %d ",longi);   
}