#include <stdio.h>
#include <string.h>

int main(){

    char str[100],str2[100];
    int longi,longi2;
    
    printf("Determinacion de si una subcadena es prefijo de otra \nIngresa la cadena\n");
    fgets(str,sizeof(str),stdin);
    printf("Ingresa la subcadena\n");
    fgets(str2,sizeof(str2),stdin);

    str[strlen(str) - 1] = '\0';
    str2[strlen(str2) - 1] = '\0';

    int esPref;
    for(int i = 0; i < strlen(str2); i++){
        if(str[i] != str2[i]){
            esPref = 0;
            break;
        }
    }
    if(esPref==0){
        printf("no es prefijo");
    }else{
        printf("es prefijo");
    }
      
}