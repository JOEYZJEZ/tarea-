#include <stdio.h>

int main()
{

            float ResistenciaTotal;
            float resistencia1;
            float resistencia2;
            float resistencia3;
            float paralelo01;
            float VIn;
            float ITotal;
            float I1;
            float I2;
            float I3;
            float Comprobar;

            resistencia1 = 0;
            resistencia2 = 0;
            resistencia3 =0;
            paralelo01 = 0;
            ResistenciaTotal =0;

            printf ("Escribe el valor del Voltaje de entrada");
            scanf ("%f", &VIn);
            printf("Escribe el valor de la primera resistencia");
            scanf("%f", &resistencia1);
            printf("Escribe el valor de la segunda resistencia");
            scanf("%f", &resistencia2);
            printf("Escribe el valor de la tercera resistencia");
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

            return 0;
            }
