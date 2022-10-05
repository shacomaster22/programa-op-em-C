/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  float produt, desconto, tot, dut, vend, parcela ;
    printf("digite o valor do produto");
     scanf("%f",&produt);
      tot = produt*0.10;
      desconto = produt - tot;
      parcela = produt/3;
      dut = desconto*0.05;
      
      printf("\no valor do produto com desconto eh: %f",desconto);
      printf("\no produto parcelado em 3 vezes eh: %f",parcela);
      printf("\n a comissao do vendedor eh %f:", dut);
    return 0;
}
