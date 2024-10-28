//4. Write a function which can find and return summation of all factors of a number. After
//that, input a number and display summation of all factors of that number.

#include <stdio.h>

int Find_Factors(int Number)
{
  int i,sum=0;

  for (i = 1; i <= Number; i++)
   {
    if(Number%i == 0)
     {
        sum = sum + i;
     }
   }
   return sum;
}

int main()
{
  int Number,total;

  printf("Please Enter number to Find Factors\n");
  scanf("%d", &Number);
  total=Find_Factors(Number);
  printf("Summation of all Factors are:\n%d",total);

  return 0;
}

