#include <stdio.h>




int main()
{

int input;
int tw;
int ten;
int five;
int output;

printf("Enter the amount:");
scanf("%d",&input);

tw = input / 20;
input = input - (tw * 20);
ten = input / 10;
input = input - (ten * 10);
five = input / 5;
input = input - (five * 10);


printf("Twentys: ");
printf("%d\n", tw);
printf("Tens: ");
printf("%d\n", ten);
printf("Fives: ");
printf("%d\n", five);
printf("Ones: ");
printf("%d\n", input);


}
