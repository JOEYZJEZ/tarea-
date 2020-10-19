#include<stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int opc=1;
    while(opc!=7)
{
    printf("Bievenido.\n");
    printf("Elija una opcion de las que se muetra en el menu.");
    printf("\n(1)Resistencias en paralelo:\n(2)Resistencias para leds:\n(3)Promedio:\n(4)Ecuacion:\n(5)Serie1:\n(6)Serie2:\n(7)salir:\n");
    scanf("%d",&opc);

if (opc==1)
{
    float ResistenciaTotal,resistencia1,resistencia2,resistencia3,paralelo01,VIn,ITotal,I1,I2,I3,Comprobar;
    resistencia1 = 0;
    resistencia2 = 0;
    resistencia3 =0;
    paralelo01 = 0;
    ResistenciaTotal =0;
    printf ("Escribe el valor del Voltaje de entrada");
    scanf ("%f", &VIn);
    printf("Escribe el valor de la primera resistencia:");
    scanf("%f", &resistencia1);
    printf("Escribe el valor de la segunda resistencia:");
    scanf("%f", &resistencia2);
    printf("Escribe el valor de la tercera resistencia:");
    scanf("%f", &resistencia3);

    paralelo01 = (resistencia1 * resistencia2)/(resistencia1 + resistencia2);
    ResistenciaTotal = (paralelo01 * resistencia3)/(paralelo01 + resistencia3);

    printf("Resistencia Total: %.2f \n", ResistenciaTotal);

    ITotal= VIn/ResistenciaTotal;
    printf("Corriente total %f\n",ITotal);
    printf("Voltaje total = V1 = V2 = V3 = %f\n",VIn);

    printf("Corrientes en cada resistencia\n");
    I1= VIn/resistencia1;
    printf("Corriente de resistencia 1= %f\n",I1);
    I2= VIn/resistencia2;
    printf("Corriente de resistencia 2= %f\n",I2);
    I3= VIn/resistencia3;
    printf("Corriente de resistencia 3= %f\n",I3);

    Comprobar= I1+I2+I3;
    printf("Comprobacion de la suma de las corrientes I1, I2, I3= %f\n",Comprobar);
}

if (opc==2)
{
    float Vin, LedAzulb, ResledAzul, VledAzul, IledAzul, VR,Ledverde, Resledverde, Vledverde, Iledverde, VR1, Ledamarillo, Resledamarillo, Vledamarillo, Iledamarillo, VR2;
    VledAzul= 3 ;
    IledAzul= 20 ;
    Vledverde= 3 ;
    Iledverde= 20 ;
    Vledamarillo= 1,8 ;
    Iledamarillo= 20 ;

    printf( " ingrese el valor del voltaje de alimentacion \n " );
    scanf( "%f",&Vin);
    printf( " Voltaje de alimentacion = %f \n ",Vin);
    VR=Vin-VledAzul;
    ResledAzul=VR/IledAzul;
    printf( " Resistencia para el Led azul  = %f \n ",ResledAzul);
    printf( " Voltaje de alimentacion = %f \n ",Vin);
    VR1=Vin-Vledverde;
    Resledverde=VR1/Iledverde;
    printf( " Resistencia para el Led verde  = %f \n ",Resledverde);
    printf( " Voltaje de alimentacion = %f \n ",Vin);
    VR2=Vin-Vledamarillo;
    Resledamarillo=VR2/Iledamarillo;
    printf( " Resistencia para el Led amarillo = %f \n ",Resledamarillo);
}
else if(opc==3)
{
    char  Variable1,Variable2,Variable3;
    float cal1,cal2,cal3,prom;
    printf ("Ingresa tres calificaciones usando letras A,B,C,D,E,F\n");
    printf ("Teniendo en cuenta que el siguiente valor para cada letra\nA=10\nB=9\nC=8\nD=7\nE=6\nF=5\n");
    printf("Ingresa 3  calificaciones:");
    scanf("%c %c %c", &Variable1, &Variable2, &Variable3);
    printf("Los datos ingresados son %c %c %c ", Variable1, Variable2, Variable3);

if (Variable1=='A')
       cal1=0+10;
    else if (Variable1=='B')
        cal1=0+9;
    else if (Variable1=='C')
        cal1=0+8;
    else if (Variable1=='D')
        cal1=0+7;
    else if (Variable1=='E')
        cal1=0+6;
    else if (Variable1=='F')
        cal1=0+5;
    else
        {
    printf("calificacion reprobatoria\n");
        }
    if (Variable2=='A')
       cal2=0+10;
   else if (Variable2=='B')
        cal2=0+9;
   else if (Variable2=='C')
        cal2=0+8;
   else if (Variable2=='D')
        cal2=0+7;
   else if (Variable2=='E')
        cal2=0+6;
   else if (Variable2=='F')
        cal2=0+5;
   else
         {
   printf("calificacion reprobatoria\n");
         }
   if (Variable3=='A')
       cal3=0+10;
   else if (Variable3=='B')
        cal3=0+9;
   else if (Variable3=='C')
        cal3=0+8;
   else if (Variable3=='D')
        cal3=0+7;
   else if (Variable3=='E')
        cal3=0+6;
   else if (Variable3=='F')
        cal3=0+5;
   else
   {
   printf("calificacion reprobatoria\n");
   }
   prom=(cal1+cal2+cal3)/3;
{
   printf ("Tu promedio es de:%f\n", prom);
}
    if (prom>=6)
{
{
    printf("Felicidades, pasaste al siguiente nivel\n");
}
}
      else
        {
        printf ("Calificacion reprobatoria\n");
        }

 }
 }
if (opc==4)
{
   float a, b, c, D, x1, x2;
    printf ("Ecuacion cuadratica\n");
    printf ("por medio de la formula general\n");
    printf ("Ax^2+Bx+c=0 \n");
    printf ("\n ingresa el termino de la seccion cuadratia: \n");
    scanf ("%f", &a);
    printf ("\n ingresa el termino lineal: \n");
    scanf ("%f", &b);
    printf ("\n ingresa el termino de la seccion independiente: \n");
    scanf ("%f", &c);

    if (a==0)
    {
    printf ("\n error, esto no es correcto");
    return 0;
    }
    else
    {
    D= b*b-4*a*c;
    if (D>0)
    {
    x1=(-b+sqrt(D))/(2.0*a);
    x2=(-b-sqrt(D))/(2.0*a);
    printf ("\n x1= %1f \n",x1);
    printf ("\n x2= %1f \n",x2);
    }
    else
    if (D==0)
    {
    x1= (-b)/(2.0*a);
    printf("\n x= %1f \n",x1);
    }
    else
    {
    printf ("error, termino incorrecto \n");
    }
    }
}
else if (opc==5)
{
    int N;
    int cont=0;
    printf("Escribe el valor de N: ");
    scanf("%d",&N);

    while(cont<=N)
    {
    printf("%d ",(N*N)-(cont*2));
    cont=cont+1;
    }
}
else if(opc==6);
{
    int N;
    int cont=0;
    printf("Escribe el valor de N: ");
    scanf("%d",&N);

    while(cont<=N+N+1)
    {
    printf("%d ",(N*3)+(cont*2));
    cont=cont+1;
     }
     {}

 else
             {


    printf("Este valor no esta dado\nADIOS\n");
    opc=6;
            }

    getch();
    system("cls");

}

}

}

