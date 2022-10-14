/*) Faça um programa em C que receba a altura e o sexo de uma pessoa e calcule e
mostre seu peso ideal, utilizando as seguintes formulas (onde h corresponde a
altura):
• Homens: (72.7 ∗ h) − 58
• Mulheres: (62, 1 ∗ h) − 44, 7*/

#include <stdio.h>

int main()
{
char sexo, F,M;
float altura, peso,resultado ;
// M para masculino e F para feminino

   printf("informe seu sexo[F] ou [M]: ");
   scanf("%c", &sexo);
   
   printf("informe sua altura:");
   scanf("%f",&altura);
   
   printf("informe seu peso : ");
   scanf("%f", &peso);
    
    if (sexo=='M'){
        resultado = (72.1*altura - 50);
        printf ("seu peso ideal é 56,5");
    }
    else if (sexo== 'F'){
        resultado =(62.1*altura - 44.7);
        printf("seu peso ideal é 52,7");
    }
    return 0;
}
