#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    int longi;
    
    printf("Determinacion de si la cadena ingresada es vacia\nIngresa la cadena\n");
    fgets(str,sizeof(str),stdin);
    
    longi = strlen(str)-1;
    if(longi == 0){
     printf("La longitud de la cadena ingresada es vacia");
    }else{
       printf("La longitud de la cadena ingresada no es vacia, su longitud es %d ",longi); 
    }
      
}