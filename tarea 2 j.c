# include <stdio.h>

int  main ()
{
    float Vin, LedAzulb, ResledAzul, VledAzul, IledAzul, VR;
    float Ledverde, Resledverde, Vledverde, Iledverde, VR1;
    float Ledamarillo, Resledamarillo, Vledamarillo, Iledamarillo, VR2;

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

    return  0 ;
}
