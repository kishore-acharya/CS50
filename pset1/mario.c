#include <stdio.h>
#include <cs50.h>
int main(void)
{
 
 int height;
 do{
     printf("Enter the height: ");
    height=get_int();
    if(height==0)
    {
        break;
    }
   } while(height<0||height>23);
int space = height-1;
for(int i=1;i<=height;i++)
 {
    for(int k=space;k>0;k--)
    {
        printf(" ");
    }
    for(int j=i;j>0;j--)
    {
        printf("#");
    } 
    printf("  ");
    for(int j=i;j>0;j--)
    {
        printf("#");
    }    
    printf("\n");
    space--;
     
 }
 return 0;
}

   