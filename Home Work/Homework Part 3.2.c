/*2. Write a function which can find and calculate all the factors of a number and then return
the number of factors. For example a function int factor(int n, int *ans) calculates the
factor of n and stores the factors in ans array. The function returns the number of factors
of n. Now you have to input the number from the main function and calculate the factors
accordingly.*/
#include <stdio.h>

void Find_Factors(int Number)
{
  int i;

  for (i = 1; i <= Number; i++)
   {
    if(Number%i == 0)
     {
       printf("%d ", i);
     }
   }
}

int main()
{
  int Number;

  printf("Please Enter number to Find Factors\n");
  scanf("%d", &Number);

  printf("\nFactors of a Number are:\n");
  Find_Factors(Number);

  return 0;
}
