#include <stdio.h>

int main(void){

float left_digit_f, num_reversed;
int right_digit,left_digit,num;

printf("Please type a 2 digit number:\n");
scanf("%d",&num);

right_digit = num%10;

left_digit = num/10;

left_digit_f = (float)left_digit;
left_digit_f = left_digit_f/10;

num_reversed = (right_digit + left_digit_f)*10;



printf("The reversed number: %.0f", num_reversed );



return 0;

}