int menuDeOpciones(){
    int opcion;
    system("cls");
printf("****Calculadora****\n Elija que desea hacer:\n\n");
printf("1-- para sumar\n");
printf("2-- para restar\n");
printf("3-- para multiplicar\n");
printf("4-- para dividir\n");
printf("5-- para sacar el factorial\n");
printf("6-- para salir\n");
scanf("%d", &opcion);
return opcion;

}



int sumar(int a, int b){
printf("ingrese el primer numero\n");
scanf("%d", &a);
printf("ingrese el segundo numero\n");
scanf("%d", &b);
int respuesta;
respuesta = a + b;
printf("el resultado de la suma es: %d\n", respuesta);
return respuesta;
}

int restar(int a, int b){
printf("ingrese el primer numero\n");
scanf("%d", &a);
printf("ingrese el segundo numero\n");
scanf("%d", &b);
int respuesta;
respuesta = a - b;
printf("el resultado de la resta es: %d\n", respuesta);
return respuesta;}

int multiplicar(int a, int b){
printf("ingrese el primer numero\n");
scanf("%d", &a);
printf("ingrese el segundo numero\n");
scanf("%d", &b);
int respuesta;
respuesta = a * b;
printf("el resultado de la multiplicacion es: %d\n", respuesta);
return respuesta;
}

float dividir(float a, float b){
float respuesta;
printf("ingrese el numero a dividir\n");
   scanf("%f", &a);
while(a < 0){
    printf("error ingrese un numero positivo\n");
    scanf("%f", &a);
}
 printf("ingrese el numero divisor\n");
   scanf("%f", &b);
while(b < 1){
    printf("error ingrese un numero positivo\n");
    scanf("%f", &b);
}
respuesta = a / b;
printf("el resultado de la division es: %.2f\n", respuesta);
return respuesta;
}

int factorial(int a){
    printf("ingrese el numero a sacar el factorial:\n ");
    scanf("%d", &a);
    int fact = 1;
for(int i = 1; i <= a; i++){
    fact = fact * i;
}
printf("el factorial del numero elegido es: %d\n", fact);
return fact;
}
