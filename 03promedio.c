#include <stdio.h>

main()
{
    char  V1, V2, V3;
    float prom, cal1, cal2, cal3;
    printf ("Escriba sus calificaciones usando A, B, C, D, E o F. \n");
    printf("Escriba 3 calificaciones:\n");

    scanf("%c %c %c", &V1, &V2, &V3);

    if (V1=='A')
    {
        cal1=0+10;
    }
    else if (V1=='B')
    {
        cal1=0+9;
    }
    else if (V1=='C')
    {
        cal1=0+8;
    }
    else if (V1=='D')
    {
        cal1=0+7;
    }
    else if (V1=='E')
    {
        cal1=0+6;
    }
    else if (V1=='F')
    {
        cal1=0+5;
    }
 else
        {
        printf ("Calificacion 1 reprobatoria.\n");
    }

    if (V2=='A')
    {
        cal2=0+10;

    }
    else if (V2=='B')
    {
        cal2=0+9;
    }
    else if (V2=='C')
    {
        cal2=0+8;
    }
    else if (V2=='D')
    {
        cal2=0+7;
    }
    else if (V2=='E')
    {
        cal2=0+6;
    }
    else if (V2=='F')
    {
        cal2=0+5;
    }
 else
        {
        printf ("Calificacion 2 reprobatoria\n");
    }

    if (V3=='A')
    {
        cal3=0+10;
    }
    else if (V3=='B')
    {
        cal3=0+9;
    }
    else if (V3=='C')
    {
        cal3=0+8;
    }
    else if (V2=='D')
    {
        cal3=0+7;
    }
    else if (V3=='E')
    {
        cal3=0+6;
    }
    else if (V3=='F')
    {
        cal3=0+5;
    }
 else
        {
        printf ("Calificacion 3 reprobatoria %f \n", prom);
    }
    prom=(cal1+cal2+cal3)/3;

    printf ("Tu promedio es de:%f\n", prom);

    if (prom<=5)
    {
        printf ("Calificacion reprobatoria\n");
    }

    return 0;
}
