#include <stdio.h>
float radio;
float perimetro;
float area;
float pi=3.14;

int main(){
     printf("Ingrese radio de la circunferencia\n");
    scanf("%f", &radio); 
 perimetro= 2 * pi * radio;
 area= pi * radio * radio;
    printf("El perimetro de la circunferencia es %f\n", perimetro);
     printf("El area de la circunferencia es %f\n", area);
     return 0;
}