#include <stdio.h>
#include <stdlib.h>
#include "luis.h"


int main()
{
char continuar = 's';
int respuesta;
int x;
int y;
do{
switch(menuDeOpciones()){
case 1: sumar(x, y);
break;
case 2: restar(x, y);
break;
case 3: multiplicar(x, y);
break;
case 4: dividir(x, y);
break;
case 5: factorial(x);
break;
case 6: continuar = 'n';
break;
default: printf("opcion no valida \n");

}
system("pause");
printf("presione una tecla para continuar... ");
}while(continuar == 's');
    return 0;
}

