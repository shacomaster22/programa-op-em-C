/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{      
        float valor, pagamento, tilt, carro, ent, ju;
         
         printf("digite o valor do carro");
          scanf("%f",&valor);
         printf("digite a forma de pagamento se for a vista digite 1\n se o pagamento for a prazo digite 2");
          scanf("%f",&pagamento);
          if(pagamento == 1 ){
              carro = valor*0.05;
              tilt = carro - valor;
              printf("o valor do carro a vista eh: %f:",tilt);
          
          }else {
              ent = valor*0.30;
              printf("o valor de entrada sera %.2f\n",ent);
              printf("coloque o numero de parcelas");
              ju = valor*1,15
              printf (" o valor com juros por parcela sera de: %f",ju)
            
             }
        
  
 
 



}
