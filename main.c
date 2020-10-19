#include<stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    int opc=1;
    while(opc!=7)
    {
    printf("Bievenido.\n");
    printf("Elija una opcion de las que se muetra en el menu.");
    printf("\n1.Resistencias en Paralelo:\n2.Resistencias para Leds:\n3.Promedio:\n4.Ecuacion:\n5.Serie 1:\n6.serie 2:\n");
    scanf("%d",&opc);

if(opc==1)
{
    float ResT,Res1,Res2,Res3,Paralelo,Vol,Itotal,I1,I2,I3,Comprobar;
        Res1=0;
        Res2=0;
        Res3=0;
        Paralelo = 0;
        ResT =0;

            printf ("Escribe el valor del Voltaje de entrada \n");
            scanf ("%f", &Vol);
            printf("Escribe el valor de la R1 \n");
            scanf("%f", &Res1);
            printf("Escribe el valor de la R2 \n");
            scanf("%f", &Res2);
            printf("Escribe el valor de la R3 \n");
            scanf("%f", &Res3);

            Paralelo = (Res1 * Res2)/(Res1 + Res2);
            ResT = (Paralelo * Res3)/(Paralelo + Res3);

            printf("Resistencia Total: %.2f \n",ResT);

            Itotal= Vol/ResT;
            printf("Corriente total %f\n",Itotal);
            printf("Voltaje total = V1 = V2 = V3 = %f\n",Vol);

            printf("Corrientes en cada resistencia %f\n");
            I1= Vol/Res1;
            printf("Corriente de resistencia 1= %f\n",I1);
            I2= Vol/Res2;
            printf("Corriente de resistencia 2= %f\n",I2);
            I3= Vol/Res3;
            printf("Corriente de resistencia 3= %f\n",I3);

            Comprobar =I1+I2+I3;
            printf("Comprobacion de la suma de las corrientes I1, I2, I3 = %f\n \n",Comprobar);
}
if(opc==2)
{
     float Vin,LedAmarillo,ResledA,VledA,IledA,VR,LedR,ResledR,VledR,IledR,VR2,LedV,ResledV,VledV,IledV,VR3;
            VledA= 1.9;
            IledA= 0.015;
            VledR= 1.8;
            IledR= 0.15;
            VledV= 2.0;
            IledV= 0.02;

            printf("Ingrese el valor del voltaje de alimentacion\n");
            scanf ("%f",&Vin);
            printf("Voltaje de alimentacion= %f\n",Vin);

            VR= Vin-VledA;
            ResledA= VR/IledA;

            printf("Resistencia para el Led Azul STD= %f\n",ResledA);

            VR2= Vin-VledR;
            ResledR= VR/IledR;

            printf("Resistencia para el Led Rojo brillante= %f\n",ResledR);

            VR3= Vin-VledV;
            ResledV= VR/IledV;

            printf("Resistencia para el Led Verde STD = %f\n",ResledA);
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
else if(opc==4)
{
    float a, b, c,r1,r2,r3;
    printf("ingresa los valores para \"a\" \"b\" \"c\" ");
    scanf("%f %f %f",&a ,&b ,&c);

    r3=pow(b,2.0)-4*a*c;
    r1=((-b+sqrt(r3))/(2.0*a));
    r2=((-b-sqrt(r3))/(2.0*a));
{
    printf( " el resultado para x1 es %.2f",r1);
    printf( " el resultado para x2 es %.2f",r2);
}
}
else if(opc==5)
{
    int cont=0;
     int N;
    printf("Valor de N: ");
    scanf("%d",&N);

    while(cont<=N)
{
    printf("%d ",(N*N)-(cont*2));
    cont=cont+1;
}
}
else if(opc==6)
{
     int cont=0;
     int Valor;
       printf("Igresa el valor de N: ");
       scanf("%d",&Valor);
       while(cont<=Valor+Valor+1)
    {

       printf("%d ",(3*Valor)+(cont*2));
       cont=cont+1;
}
}
    else
    {
    printf("Error\nintenta con un numero dentro del menu.\n");
    opc=6;
    }
    getch();
    system("cls");
}
}
