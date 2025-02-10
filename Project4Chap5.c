#include <stdio.h>

int main(void){

int i,j, compute;

printf("Compute number i.\n");
scanf("%d", &i);

printf("Compute number j.\n");
scanf("%d", &j);

printf("i = %d, j = %d\n", i,j);
if(i<j){

compute = -1;
printf("compute = %d, i<j", compute);

}
if(i==j){

compute = 0;
printf("compute = %d, i=j", compute);
}

if(i>j){

compute = 1;
printf("compute = %d, i>j", compute);


}

return 0;
}