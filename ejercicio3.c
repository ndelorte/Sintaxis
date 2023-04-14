#include <stdio.h>
#include <string.h>

int main(){

    char str[100],str2[100];
    int longi,longi2;
    
    printf("Concatenacion de dos cadenas \nIngresa la primera cadena\n");
    fgets(str,sizeof(str),stdin);
    printf("Ingresa la segunda cadena\n");
    fgets(str2,sizeof(str2),stdin);

    str[strlen(str) - 1] = '\0';

    strcat(str,str2);

    printf("La concatenacion de las dos cadenas dadas es %s ",str);
      
}