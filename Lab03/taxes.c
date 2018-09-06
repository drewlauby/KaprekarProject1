/**
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 */
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {

  double agi;
  char c;
  double tax;
  double childCredit;
  double totalTax;
  int numChildren;

  printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);

  printf("Do you have any children? (Y) or (N)? ");
  getchar(); //remove the endline character
  c = getchar();

  if() {
    printf("How many children do you have? ")
    scanf("%d", &numChildren)
  }

  if(agi < 0 || numChildren < 0) {
    printf("Invalid inputs");
    exit(1);
  }

  if()

  if(agi > 0 && agi <= 17000)

  //TODO: compute the tax, child credit, and total tax:


  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("totalTax:     $%10.2f\n", totalTax);

  return 0;
}
