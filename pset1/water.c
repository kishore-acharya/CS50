#include <stdio.h>
#include <cs50.h>
int main(void)
{
 printf("Enter the number of minutes\n");
 int minutes = get_int();
 int bottles=minutes*12;
 printf("Minutes: %i\n",minutes);
 printf("Bottles: %i",bottles);
}