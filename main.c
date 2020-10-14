#include <stdio.h>

main()
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
    return 0;
}
