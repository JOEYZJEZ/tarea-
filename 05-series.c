#include <stdio.h>

main()
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
    return 0;
}
