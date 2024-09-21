#include <stdio.h>
#include <stdlib.h>
///Problemas secuenciales
/**Suponga que una persona va a invertir su capital en un banco y
desea saber cuánto dinero ganará después de un mes
si el banco paga el 2% mensual.*/
///Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber cuánto deberá pagar finalmente por su compra.
///Un maestro desea saber qué porcentaje de hombres y de mujeres hay en un grupo de estudiantes.
///Determinar si un estudiante aprueba o reprueba un curso, sabiendo que aprobará si su promedio de tres calificaciones es mayor o igual a 7, caso contrario reprueba.
///En un almacén se hace un 20% de descuento a los clientes cuya compra supere los $5.000 ¿Cuál será la cantidad que pagará una persona por su compra?

/** Un obrero necesita calcular su salario semanal, el cual se obtiene de la siguiente manera: si trabaja 40 horas o menos se le paga $300 por hora,
 si trabaja más de 40 horas se le paga $300 por cada una de las primeras 40 horas y $400 por cada hora extra.**/
/// Desarrolle un algoritmo que lea dos números y los imprima en forma ascendente./
/** Hacer un algoritmo que calcule el total a pagar por la compra de camisas.
Si se compran tres camisas o más se aplica un descuento del 20% sobre el total de la compra
 y si son menos de tres camisas un descuento del 10%.**/
///Leer 2 números, si son iguales multiplicarlos, si el primero es mayor que el segundo restarlos y si no sumarlos.
/// Leer tres números diferentes e imprimir el mayor de ellos.
/// Calcular el promedio de un estudiante que tiene 7 calificaciones en la materia Programación A.
/// Leer 10 números y obtener su cubo y su cuarta.
///Leer 10 números e imprimir solamente los positivos.
/// Leer 15 números negativos, convertirlos en positivos e imprimirlos.
/**Suponga que se tiene un conjunto de calificaciones de un grupo de 40 estudiantes.
 Realizar un algoritmo para calcular la calificación promedio y la calificación más baja de todo el grupo.**/
/// Calcular e imprimir la tabla de multiplicar de un número cualquiera. Imprimir el multiplicando, el multiplicador y el producto.





int main()
{

    ///PROBLEMAS SECUENCIALES
    ///ejer1------------------------------------------------------------------------------------
//    float capital=0;
//    printf("ingrese su capital a invertir:\n");
//    scanf("%f",&capital);
//    float gananciaTotal=capital*1.02;
//    printf("La ganancia total despues de un mes es de :%.02f\n",gananciaTotal);
    ///-----------------------------------------------------------------------------------------
    ///ejer2------------------------------------------------------------------------------------
//    float compra=0;
//    printf("ingrese el total de su compra:\n");
//    scanf("%f",&compra);
//    float PrecioTotal;
//    PrecioTotal=compra*0.85;
//    printf("El precio total de la compra es de:%.02f\n",PrecioTotal);
    ///ejer3------------------------------------------------------------------------------------
//   int cantidadDeEstudiantes=0;
//   printf("ingrese la cantidad de estudiantes que asisten al curso:\n");
//   scanf("%i",&cantidadDeEstudiantes);
//   int cantMujeres=0;
//   printf("ingrese la cantidad de mujeres que asisten al curso:\n");
//   scanf("%i",&cantMujeres);
//   int cantHombres=0;
//   printf("ingrese la cantidad de hombres que asisten al curso:\n");
//   scanf("%i",&cantHombres);
//   float porcentajeM;
//   float porcentajeH;
//   porcentajeM=(float)cantHombres/cantidadDeEstudiantes*100;
//   porcentajeH=(float)cantMujeres/cantidadDeEstudiantes*100;
//   printf("Porcentaje de Mujeres en el curso es de:%.02f%%\n",porcentajeM);
//   printf("Porcentaje de Hombres en el curso es de:%.02f%%\n",porcentajeH);
    ///----------------------------------------------------------------------------------------
    ///PROBLEMAS CONDICIONALES SELECTIVOS SIMPLES
    ///ejer1----------------------------------------------------------------------------------
//    int nota1=0;
//    int nota2=0;
//    int nota3=0;
//    printf("ingrese la primer nota:\n");
//    scanf("%i",&nota1);
//    printf("ingrese la segunda nota:\n");
//    scanf("%i",&nota2);
//    printf("ingrese la tercer nota:\n");
//    scanf("%i",&nota3);
//    float promedio=0;
//    promedio=(nota1+nota2+nota3)/3;
//    if (promedio>=7){
//    printf("¡¡¡Felicidades has aprobado!!!\n");
//    }
//    else
//    {
//        printf("Lamentablemente no has llegado a la nota de aprobacion suerte en la proxima!!!\n");
//    }
    ///-----------------------------------------------------------------------------------------
//    ///ejer2------------------------------------------------------------------------------------
//    float montoDecompra=0;
//    printf("ingrese el valor de su compra:\n");
//    scanf("%f",&montoDecompra);
//    float precioTotal;
//    if (montoDecompra>=5000)
//    {
//        precioTotal=montoDecompra*0.8;
//         printf("El valor original de su compra es: %.02f\n", montoDecompra);
//        printf("El valor de su compra con el descuento es de:%.02f%\n",precioTotal);
//    }
//    else {
//        printf("El valor de su compra es de:%.02f%\n",montoDecompra);
//    }

    ///-----------------------------------------------------------------------------------------
    ///Ejer3------------------------------------------------------------------------------------
//
//     int salarioSemanal=0;
//     int horas=0;
//     int pagoHora=300;
//     int HoraExtra=400;
//     int horasExtra=0;
//     printf("ingrese las horas que ha trabajado esta semana:\n");
//     scanf("%i",&horas);
//
//     if (horas<=40){
//        salarioSemanal=pagoHora*horas;
//        printf("Su sueldo semanal sera de:%i\n",salarioSemanal);
//     }
//     else {
//        horasExtra=horas-40;
//        salarioSemanal=pagoHora*horas+horasExtra*HoraExtra;
//        printf("Su sueldo semanal sera de:%i\n",salarioSemanal);
//     }
    ///-----------------------------------------------------------------------------------------
    ///ejer4------------------------------------------------------------------------------------
//    int num1=0;
//    int num2=0;
//    printf("Ingrese un numero:\n");
//    scanf("%i",&num1);
//    printf("ingrese otro numero:\n");
//    scanf("%i",&num2);
//    if(num1<num2){
//        printf("%i\n",num1);
//        printf("%i\n",num2);
//
//    }
//    else{
//        printf("%i\n",num2);
//        printf("%i\n",num1);
//    }
    ///-----------------------------------------------------------------------------------------
    ///ejer5------------------------------------------------------------------------------------
//    int camisas=0;
//    printf("ingrese la cantidad de camisas que va a comprar:\n");
//    scanf("%i",&camisas);
//    int precio=100;
//    int precioTotal=0;
//    if(camisas>=3){
//        precioTotal=camisas*precio*0.8;
//        printf("el total a pagar es de:%i\n",precioTotal);
//    }
//        else{
//            precioTotal=camisas*precio*0.9;
//            printf("el total a pagar es de:%i\n",precioTotal);
//        }
    ///-----------------------------------------------------------------------------------------
    /// PROBLEMAS CONDICIONALES SELECTIVOS COMPUESTOS
    ///ejer1-----------------------------------------------------------------------------------
//    int num1=0;
//    int num2=0;
//    int rta=0;
//    printf("Ingrese un numero:\n");
//    scanf("%i",&num1);
//    printf("ingrese otro numero:\n");
//    scanf("%i",&num2);
//    if(num1==num2){
//         rta=num1*num2;
//        printf("Multiplicacion de ambos numeros:%i\n",rta);
//    }
//    else if(num1>num2){
//        rta=num1-num2;
//        printf("el resultado es: %i\n",rta);
//    }
//    else{
//        rta=num1+num2;
//        printf("el resultado es: %i\n",rta);
//    }
    ///----------------------------------------------------------------------------------------
    ///ejer2-----------------------------------------------------------------------------------
//    int num1=0;
//    int num2=0;
//    int num3=0;
//    printf("Ingrese un numero:\n");
//    scanf("%i",&num1);
//    printf("ingrese otro numero:\n");
//    scanf("%i",&num2);
//    printf("ingrese un ultimo numero:\n");
//    scanf("%i",&num3);
//    if(num1>num2&&num1>num3)
//    {
//        printf("El numero mayor es:%i\n",num1);
//    }
//    else if(num2>num1&&num2>num3)
//    {
//        printf("El numero mayor es:%i\n",num2);
//    }
//
//    else if(num3>num1&&num3>num1)
//    {
//        printf("El numero mayor es:%i\n",num3);
//    }

    ///----------------------------------------------------------------------------------------
    ///PROBLEMAS CON REPETICIONES
    ///ejer1-----------------------------------------------------------------------------------
//    int promedio=0;
//    int nota=0;
//    int notas=0;
//    int i=0;
//    for (i=0;i<7;i++){
//        printf("ingrese una nota:\n");
//        scanf("%i",&nota);
//        notas=notas+i;
//    }
//
//    promedio=notas/3;
//    printf("Su promedio en progamacion A es de:%i\n",promedio);
    ///----------------------------------------------------------------------------------------
    ///ejer2-----------------------------------------------------------------------------------
//    int numero=0;
//    int cubo=0;
//    int cuarta=0;
//    for (int i=0;i<10;i++){
//    printf("ingrese un numero\n");
//      scanf("%i",&numero);
//      cubo=numero*numero*numero;
//      printf("El cubo de su numero es:%i\n",cubo);
//      cuarta=numero*numero*numero*numero;
//      printf("La cuarta de su numero es:%i\n",cuarta);
//    }
    ///----------------------------------------------------------------------------------------
    ///ejer3-----------------------------------------------------------------------------------
//    int numero=0;
//    for (int i=0;i<10;i++){
//    printf("ingrese un numero\n");
//      scanf("%i",&numero);
//      if(numero>=0){
//        printf("%i\n",numero);
//    }
//    }
    ///----------------------------------------------------------------------------------------
    ///ejer4-----------------------------------------------------------------------------------
//    int numero=0;
//    int numerosPositivos=0;
//    for (int i=0;i<10;i++){
//    printf("ingrese un numero\n");
//      scanf("%i",&numero);
//      if(numero<0){
//      numerosPositivos=numero*-1;
//printf("Los numeros pasados a positivos:%i\n",numerosPositivos);
//    }
//
//    }
    ///----------------------------------------------------------------------------------------
    ///ejer5-----------------------------------------------------------------------------------
//    int calificaciones=0;
//    int nota=0;
//    int promedio=0;
//    int i;
//    int menor=10;
//    int NotaMasBaja=0;
//    for (i=0; i<10; i++)
//    {
//        printf("ingrese una calificacion\n");
//        scanf("%i",&calificaciones);
//        nota=nota+calificaciones;
//        if(menor>=calificaciones)
//        {
//            menor=calificaciones;
//        }
//    }
//    promedio=nota/i;
//    printf("El promedio de todas las calificaciones de los estudiantes es de:%i\n",promedio);
//
//    printf("La menor nota es:%i\n",menor);
    ///----------------------------------------------------------------------------------------
    ///ejer6-----------------------------------------------------------------------------------
    int numero=0;
    int tabla=0;
    printf("ingrese un numero para conocer su tabla:\n");
    scanf("%i",&numero);
    for(int i=1;i<11;i++){
        tabla=numero*i;
        printf("%ix%i=%i\n",numero,i,tabla);
    }



    ///----------------------------------------------------------------------------------------
    return 0;
}
