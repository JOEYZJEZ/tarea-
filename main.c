#include<stdio.h>
#include<stdlib.h>

int main ()
{
         int opc=1;
         int comp1,comp2,comp3,comp4;

while(opc!=6)
         {
             printf("\nHola Bienvenido a mi menu de opciones\n");
             printf("Disene un circuito de compuertas logicas AND & OR de hasta 4 niveles");
             printf("\n1. 1 Un nivel\n2. 2 niveles\n3. 3 niveles \n4. 4 niveles\n5. Nuevo circuito\n6. Salir");
             scanf("%d",&opc);
if (opc==1)
{
             printf("Eligio un circuito 1 nivel\n");
             printf("Compuertas AND=1,compuertas OR=2\n");
             printf("Ingrese las compuertas del nivel 1\n");
             scanf("%d",&comp1);

             if(comp1==1)
                   {
                    printf("la funcion del circuito es F=(A.B)\n");
                   }
              else if (comp1==2)
                   {
                   printf("la funcion del circuito es F=(A+B)\n");
                   }
              else
                   {
                    printf("ERROR\n");
                   }

}
else if (opc==2)
{
             printf("Eligio un circuito 2 niveles");
             printf("Compuertas AND=1,Compuertas OR=2\n");
             printf("Ingrese la compuerta del nivel 2 \n");
             scanf("%d",&comp2);
             printf("Ingrese las compuertas del nivel 1\n");
             scanf("%d",&comp1);


               if(comp2==1 && comp1==1)
               {
                printf("la funcion del circuito es F=(A.B).(C.D)");
               }
               else if(comp2==2 && comp1==1)
               {
                printf("la funcion del circuito es F=(A+B).(C+D)");
               }
                else if (comp2==1 && comp1==2)
               {
                printf("la funcion del circuito es F=(A.B)+(C.D)");
               }
               else if (comp2==2 && comp1==2)
               {
                printf("la funcion del circuito es F=(A+B)+(C+D)");
               }
               else
               {
                   printf ("ERROR");
               }
}

else if (opc==3)
{
                printf("Eligio un circuito 3 niveles");
                printf("Compuertas AND=1,Compuertas OR=2\n");
                printf("Ingrese las compuertas del nivel 3\n");
                scanf("%d",&comp3);
                printf("Ingrese la compuerta del nivel 2 \n");
                scanf("%d",&comp2);
                printf("Ingrese las compuertas del nivel 1\n");
                scanf("%d",&comp1);

                 if(comp3==1 && comp2==1 && comp1==1)
               {
                printf("la funcion del circuito es F=(AB.CD).(EF.GH)");
               }
               else if(comp3==2 && comp2==1 && comp1==1)
               {
                printf("la funcion del circuito es F=(A+B.C+D).(E+F.G+H)");
               }
                else if (comp3==2 && comp2==2 && comp1==1)
               {
                printf("la funcion del circuito es F=((A+B)+(C+D).(E+F)+(G+H))");
               }
               else if (comp3==2 && comp2==2 && comp1==2)
               {
                printf("la funcion del circuito es F=((A+B)+(C+D)+(E+F)+(G+H))");
               }
               else if (comp3==1 && comp2==1 && comp1==2)
               {
                printf("la funcion del circuito es F=((A.B)(C.D)+(E.F)(G.H))");
               }
               else if (comp3==1 && comp2==2 && comp1==2)
               {
                printf("la funcion del circuito es F=((A.B+C.D)+(E.F+G.H))");
               }
                else if (comp3==2 && comp2==1 && comp1==2)
               {
                printf("la funcion del circuito es F=((A+B.C+D)+(E+F.G+H))");
               }
               else if (comp3==1 && comp2==2 && comp1==1)
               {
                printf("la funcion del circuito es F=((A.B+C.D).(E.F+G.H))");
               }
               else
               {
                   printf ("ERROR");
               }
}
else if(opc==4)
{

                   printf("Eligio un circuito 4 niveles");
                   printf("Compuertas AND=1,Compuertas OR=2\n");
                   printf("Ingrese las compuertas del nivel 4\n");
                   scanf("%d",&comp4);
                   printf("Ingrese las compuertas del nivel 3\n");
                   scanf("%d",&comp3);
                   printf("Ingrese la compuerta del nivel 2 \n");
                   scanf("%d",&comp2);
                   printf("Ingrese las compuertas del nivel 1\n");
                   scanf("%d",&comp1);


               if(comp4==1 && comp3==1 && comp2==1 && comp1==1)
               {
                printf("la funcion del circuito es F=((AB.CD)(EF.GH).(IJ.KL)(MN.OP))");
               }
               else if(comp4==1 && comp3==1 && comp2==1 && comp1==2)
               {
                printf("la funcion del circuito es F=((AB.CD)(EF.GH)+(IJ.KL)(MN.OP))");
               }

                else if (comp4==1 && comp3==1 && comp2==2 && comp1==2)
               {
                printf("la funcion del circuito es F=((AB.CD)+(EF.GH)+(IJ.KL)+(MN.OP))");
               }
               else if (comp4==1 && comp3==2 && comp2==2 && comp1==2)
               {
                printf("la funcion del circuito es F=((AB+CD)+(EF+GH)+(IJ+KL)+(MN+OP))");
               }
               else if (comp4==2 && comp3==2 && comp2==2 && comp1==2)
               {
                printf("la funcion del circuito es F=(((A+B)+(C+D))+((E+F)+(G+H)))+(((I+J)+(K+L))+((M+N)+(O+P)))");
               }
               else if (comp4==2 && comp3==1 && comp2==1 && comp1==1)
               {
                printf("la funcion del circuito es F=((A+B.C+D)(E+F.GH).(I+J.K+L)(M+N.O+P))");
               }
                else if (comp4==2 && comp3==2 && comp2==1 && comp1==1)
               {
                printf("la funcion del circuito es F=(((A+B)+(C+D))((E+F)+(GH)).((I+J)+(K+L))((M+N)+(O+P)))");
               }
               else if (comp4==2 && comp3==2 && comp2==2 && comp1==1)
               {
                printf("la funcion del circuito es F=(((A+B)+(C+D))+((E+F)+(GH)).((I+J)+(K+L))+((M+N)+(O+P)))");
               }
               else if (comp4==2 && comp3==1 && comp2==1 && comp1==2)
               {
                printf("la funcion del circuito es F=(((A+B)(C+D)).((E+F)(GH))+((I+J)(K+L)).((M+N)(O+P)))");
               }
               else if (comp4==2 && comp3==1 && comp2==2 && comp1==2)
               {
                printf("la funcion del circuito es F=(((A+B)(C+D))+((E+F)(G+H))+((I+J)(K+L))+((M+N)(O+P)))");
               }
               else if (comp4==2 && comp3==2 && comp2==1 && comp1==2)
               {
                printf("la funcion del circuito es F=(((A+B)+(C+D)).((E+F)(G+H))+((I+J)(K+L))+((M+N)(O+P)))");
               }
               else if (comp4==1 && comp3==2 && comp2==2 && comp1==1)
               {
                printf("la funcion del circuito es F=(((AB)+(CD))+((EF)+(GH)).((IJ)(KL))+((MN)+(OP)))");
               }
               else if (comp4==1 && comp3==2 && comp2==1 && comp1==2)
               {
                printf("la funcion del circuito es F=(((AB)+(CD)).((EF)+(GH))+((IJ)+(KL)).((MN)+(OP)))");
               }
               else if (comp4==1 && comp3==1 && comp2==2 && comp1==2)
               {
                printf("la funcion del circuito es F=(((AB)(CD))+((EF)(GH))+((IJ)(KL))+((MN)(OP)))");
               }
               else if (comp4==2 && comp3==1 && comp2==2 && comp1==1)
               {
                printf("la funcion del circuito es F=(((AB)+(CD)).((EF)+(GH)).((IJ)+(KL)).((MN)+(OP)))");
               }
               else if (comp4==1 && comp3==1 && comp2==2 && comp1==1)
               {
                   printf("la funcion del circuito es F=(((AB)(CD))+((EF)(GH)).((IJ)(KL))+((MN)(OP)))");
               }
               else
               {
                   printf ("ERROR");
               }
}

else
{
   printf("Este valor no esta dado\nADIOS\n");
}

         getch();
         system("cls");



}

}
