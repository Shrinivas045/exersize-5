#include<stdio.h>
int main()
{
    int number,fact=1,i;
    printf("enter a number");
    scanf("%d",&number);
    
    for(i=1;i<=number;i++) 
  { fact=fact*i;
      
    } 
     printf("%d\n",fact); 
}