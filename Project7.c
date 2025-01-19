#include <stdio.h>

int main(void){

int amount, twenty=1, ten=1, five=1, one=1;

printf("Enter a dollar amount: $");
scanf("%d", &amount);

twenty = amount/20;
amount = amount - (twenty*20);

printf("$20 dollar bills: %d\n", twenty);

ten = amount/10;
amount = amount - (ten*10);

printf("$10 dollar bills: %d\n", ten);

five = amount/5;

amount = amount - (five*5);

printf("$5 dollar bills: %d\n", five);

one = amount/1;

amount = amount - one;

printf("$1 dollar bills: %d\n", one);

return 0;
   
}