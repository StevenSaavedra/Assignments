#include <stdio.h>
#include <ctype.h>

int main (void){

char PhoneLetters;

printf("Enter phone number: ");

while (PhoneLetters != '\n'){

PhoneLetters = getchar();
PhoneLetters = toupper(PhoneLetters);
if(PhoneLetters == 'A' || PhoneLetters == 'B' || PhoneLetters == 'C'){
    PhoneLetters = '2';
}
else if(PhoneLetters == 'D' || PhoneLetters == 'E' || PhoneLetters == 'F'){
    PhoneLetters = '3';
}
else if(PhoneLetters == 'G' || PhoneLetters == 'H' || PhoneLetters == 'I'){
    PhoneLetters = '4';
}
else if(PhoneLetters == 'J' || PhoneLetters == 'K' || PhoneLetters == 'L'){
    PhoneLetters = '5';
}
else if(PhoneLetters == 'M' || PhoneLetters == 'N' || PhoneLetters == 'O'){
    PhoneLetters = '6';
}
else if(PhoneLetters == 'P' || PhoneLetters == 'Q' || PhoneLetters == 'R' || PhoneLetters == 'S'){
    PhoneLetters = '7';
}
else if(PhoneLetters == 'T' || PhoneLetters == 'U' || PhoneLetters == 'V'){
    PhoneLetters = '8';
}
else if(PhoneLetters == 'W' || PhoneLetters == 'X' || PhoneLetters == 'Y' || PhoneLetters == 'Z'){
    PhoneLetters = '9';
}
printf("%c", PhoneLetters);
}


return 0;
}