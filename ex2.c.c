/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float v1, v2, v3, v4, resultado, ti;

     printf("\nescreva o primeiro valor");
      scanf("%f",&v1);
     printf("\nescreva o segundo valor");
      scanf("%f",&v2);
     printf("\ndigite o terceiro valor");
      scanf("%f",&v3);
      printf("\ndigite o quarto valor");
       scanf("%f",&v4);
       resultado = v1 + v2 + v3 + v4;
        ti = resultado/4;
        printf("\n a media desses valores eh: %.2f",ti);
    return 0;
}
