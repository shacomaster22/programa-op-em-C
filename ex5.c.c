/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float salb, sal, grat, sali, salt;
     printf("digite o seu salario base");
      scanf("%f",&salb);
     grat = salb*0.05;
      sali = salb + grat;
     salt = sali*0.07;
      sal = sali - salt;
       printf("o salario total eh : %f",sal);
        
       

    return 0;
}
