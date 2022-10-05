/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

       float premio, g1, g2, g3, g4, g5;
        printf("digit o valor do premio");
         scanf("%f",&premio);
            g1 = premio*0.40;
            g2 = premio*0.32;
            g3 = premio*0.18;
            g4 = g1 + g2 + g3;
            g5 = premio-g4;
          printf("\no primeiro ganhador ira ganhar %.2f",g1);
          printf("\no segundo ganhador ira ganhar: %.2f",g2);
          printf("\no terceiro ganhador ira ganhar %.2f",g3);
          printf("\n o quarto ganhador ira ganhar: %.2f",g5);

         return 0;
}
