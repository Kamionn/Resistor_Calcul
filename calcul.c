//
// Created by Kamion on 20/09/2022.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float R1, R2, R3;
    float Rser, Rpar;
    printf("Enter the value R1, R2, R3 : \n");
    scanf("%f%f%f", &R1, &R2, &R3);
    Rser = R1 + R2 + R3;
    Rpar = (R1*R2*R3) / (R1*R2 + R1*R2 + R2*R3);
    printf("The value of the series resistor : ", Rser);
    printf("\nThe value of the shunt  resistor :", Rpar);
    return 0;
}
