/*
  Elaborar un programa que lea tres flotantes positivos, los
  cuales representan los lados de un triángulo. Una vez
  ingresado los lados compruebe si los lados realmente forman un
  triángulo. Si es un triángulo indique que tipo de triángulo 
  es, en caso de que el triángulo sea equilatero calcular el 
  área. 


*/

/*
  Para saber si es un triángulo debe cumplirse
  a + b > c
  a + c > b
  b + c > a
  
*/

/*
  Para saber el tipo de triángulo
  Equilatero todos los lado iguales
  Escaleno todos los lados diferentes
  Isóceles dos lados iguales y uno diferente
  

*/
/*
  altura = (√3*lado)/2
  area = base*altura/2
  
*/


  

#include <stdio.h>
#include <math.h>

int main(void) {
  float a, b, c,altura, base;
  printf("\nIngrese el lado a del triangulo");
  a = leerFlotantePositivo();
  printf("\nIngrese el lado b del triangulo");
  b = leerFlotantePositivo();
  printf("\nIngrese el lado c del triangulo");
  c = leerFlotantePositivo();
  if(esTriangulo(a,b,c)){
    if(tipoTriangulo(a,b,c) == 1)
      printf("El triangulo es equilatero");
    else if(tipoTriangulo(a,b,c) == 2)
      printf("El triangulo es isóceles");
     else
       printf("El triangulo es escaleno");
    if(tipoTriangulo(a,b,c) == 1){
      altura = calcularAltura(a);
      base = a/2;
      area(base,altura);
    }
    
  }else
    printf("%f, %f, %f no forman un triángulo",a,b,c);

  

  
    
  return 0;
}