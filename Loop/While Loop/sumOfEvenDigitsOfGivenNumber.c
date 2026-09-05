#include <stdio.h>

int main()
{
  int a, sum = 0, lastDigits;
  printf("Enter Number to count Digits:");
  scanf("%d", &a);

  while (a > 0)
  {
    lastDigits = a % 10;
    if (lastDigits%2==0){
      sum=sum+lastDigits;
            a=a/10;
    }
    else {
      a=a/10;
    }
  }

  printf("SUM of the digits is %d", sum);
}