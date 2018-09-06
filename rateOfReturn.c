/**
 *Author: Drew Lauby
 *
 *This program will compute the annualized rate of return of
 *a given initial investment and an amount of time since it was invested.
 *
 */
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){

  double initial, final;
  int timeY, timeW, timeD;

  printf("Please enter inital value of investment: \n");
  scanf("%lf", &initial);

  printf("Please enter final value of investment: \n");
  scanf("%lf", &final);

  printf("Please enter time in years since initial investment: \n");
  scanf("%d", &timeY);

  printf("Please enter the number of extra weeks since initial investment: \n");
  scanf("%d", &timeW);

  printf("Please enter the number of extra days since initial investment: \n");
  scanf("%d", &timeD);

  int timeSinceInvDays = (timeY * 365) + (timeW * 7) + timeD;

  float timeSinceInv = timeSinceInvDays / 365.0;

  float rateOfRet = pow((final / initial), (1 / timeSinceInv)) - 1;

  float rateOfRetPercent = rateOfRet * 100;

  printf("Initial Value: $%.2f\n", initial);
  printf("Final Value:   $%.2f\n", final);
  printf("Years:          %.2lf\n", timeSinceInv);
  printf("Annualized Rate of Return: %.3lf%%\n", rateOfRetPercent);

}
