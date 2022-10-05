/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{


 float dolar, real, resultado;
      printf("digite um valor em reais");
        scanf("%f",&real);
      printf("digite a cotacao do dolar");
        scanf("%f",&dolar);
        resultado = real/dolar;
         printf("a cotacao em reais eh: %f",resultado);

         return 0;
}
