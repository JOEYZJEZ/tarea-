#include <stdio.h>
#include <stdlib.h>

int main ()
    {
int v1[50];
int v2[50];
int v3[50];
int sum[50];
int res[50];
int Rango;
    int opc=1;
    while(opc!=4)
        {
    printf("\nBienvenido a mi menu.\n");
    printf("Elija una opcion dentro del menu: \n");
    printf("1.Suma de 2 vectores\n2.Resta de 2 vectores\n3.Suma de 3 vectores\n4.Resta de 3 vectores\n");
    scanf("%d",&opc);

    if(opc==1)
    {
    printf("ingresa el valor: ");
    scanf("%d",&Rango);
    for (int i=1;i<=Rango;i++)
        {
        printf ("\n valor del vector 1:");
        scanf("%d",&v1[i]);
          }
          for (int i=1;i<=Rango;i++)
        {
        printf ("\n valor del vector 2:");
        scanf("%d",&v2[i]);
          }
          for (int i=1;i<=Rango;i++)
        {
          sum[i]=v1[i]+v2[i];
          printf("resultado del vector[%d]=%d\n",i,sum[i]);
          }


}
      else if(opc==2)
      {

    printf("ingresa el valor: ");
    scanf("%d",&Rango);
    for (int i=1;i<=Rango;i++)
        {
        printf ("\n valor del vector 1:");
        scanf("%d",&v1[i]);
          }
          for (int i=1;i<=Rango;i++)
        {
        printf ("\n valor del vector 2:");
        scanf("%d",&v2[i]);
          }
          for (int i=1;i<=Rango;i++)
        {
          res[i]=v1[i]-v2[i];
          printf("resultado del vector[%d]=%d\n",i,res[i]);
          }

}
       else if(opc==3)
       {
            printf("ingresa el valor: ");
    scanf("%d",&Rango);
    for (int i=1;i<=Rango;i++)
        {
        printf ("\n valor del vector 1:");
        scanf("%d",&v1[i]);
          }
          for (int i=1;i<=Rango;i++)
        {
        printf ("\n valor del vector 2:");
        scanf("%d",&v2[i]);
          }
          for (int i=1;i<=Rango;i++)
        {
        printf ("\n valor del vector 3:");
        scanf("%d",&v3[i]);
          }
          for (int i=1;i<=Rango;i++)
        {
          sum[i]=v1[i]+v2[i]+v3[i];
          printf("resultado del vector[%d]=%d\n",i,sum[i]);
          }
}
       else if(opc==4)
       {
            printf("ingresa el valor: ");
    scanf("%d",&Rango);
    for (int i=1;i<=Rango;i++)
        {
        printf ("\n valor del vector 1:");
        scanf("%d",&v1[i]);
          }
          for (int i=1;i<=Rango;i++)
        {
        printf ("\n valor del vector 2:");
        scanf("%d",&v2[i]);
          }
          for (int i=1;i<=Rango;i++)
        {
        printf ("\n valor del vector 3:");
        scanf("%d",&v3[i]);
          }
          for (int i=1;i<=Rango;i++)
        {
          res[i]=v1[i]-v2[i]-v3[i];
          printf("resultado del vector[%d]=%d\n",i,res[i]);
          }
       }

else
    {
    printf("Error");
    opc=4;
    }
    getch();
    system("cls");
}
}
