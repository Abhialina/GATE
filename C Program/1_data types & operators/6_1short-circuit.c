#include<stdio.h>
void main(){
    int i, j;
   i = 0 && 5;      //1st operand is 0 then 2nd value never evaluated,this is called AND(&&) short-circuit
   printf("%d\n", i);  

   j = 23 || 5;     //1st operand non-zero(23) then 2nd value never evaluated ,this is called OR(||) short-circuit
   printf("%d", j);
}