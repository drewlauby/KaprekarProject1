/**
 * This programs provides basic calculator functionality
 * allowing a user to enter two operands and to compute
 * various calculated values.
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv) {

  double a, b;
  int choice;

  printf("Enter operand a: ");
  scanf("%lf", &a);

  printf("Enter operand b: ");
  scanf("%lf", &b);

  printf("Enter operation:\n");
  printf("(1) Addition\n");
  printf("(2) Subtraction\n");
  printf("(3) Multiplication\n");
  printf("(4) Division\n");
  printf("(5) Minimum\n");
  printf("(6) Power\n");
  printf("(7) log_a(b)\n");
  scanf("%d", &choice);

  if(choice == 1){
    double addRes = a + b;
    printf("%f\n", addRes);
  }
  if(choice == 2){
    double subRes = a - b;
    printf("%f\n", subRes);
  }
  if(choice == 3){
    double multRes = a * b;
    printf("%f\n", multRes);
  }
  if(choice == 4){
    double divRes = a / b;
    if(b == 0){
      printf("Error: division by zero is not defined\n");
    }
    else{
    printf("%f\n", divRes);
  }
  }
  if(choice == 5){
    if(a > b){
      printf("%f\n", b);
    }
    if(a < b || a == b){
      printf("%f\n", a);
    }
  }
  if(choice == 6){
    double power = pow(a, b);
    printf("%f\n", power);
  }
  if(choice == 7){
    double logRes = (log(b)) / (log(a));
    if(a <= 0 || b <= 0){
      printf("Both operands must be positive\n");
    }
    else{
    printf("%f\n", logRes);
    }
  }




  return 0;
}
