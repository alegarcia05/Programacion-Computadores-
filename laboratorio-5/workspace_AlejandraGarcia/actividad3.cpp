#include <stdio.h>
float numero1;
float numero2;
float multiplicacion; 

int main(){

printf("Ingrese un numero\n");
    scanf("%d, &numero1"); 
    printf("Ingrese un numero\n");
    scanf("%d, &numero2");
multiplicacion= numero1*numero2;
printf("El resultado de la multiplicacion es %d\n",multiplicacion); 
return 0;
}