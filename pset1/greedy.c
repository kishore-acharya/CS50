#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
int coins=0;
float amount;
do{
    printf("O hai! How much change is owed?\n");
    amount=get_float();
    }while(amount<=0);
int change = roundf(amount*100);
while(change>0)
{
    if(change-25>=0)
    {
     change=change-25;
     coins++;
    }
    else if(change-10>=0)
    {
     change=change-10;
     coins++;
    }
    else if(change-5>=0)
    {
     change=change-5;
     coins++;
    }
    else if(change-1>=0)
    {
     change=change-1;
     coins++;
    }
}
printf("%d\n",coins);
}

