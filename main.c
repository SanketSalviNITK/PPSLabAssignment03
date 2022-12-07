#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int ch;
  float a, b, c;
  do {
    printf("** Menu Driven Arithematic Operation **\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter the choice:");
    scanf("%d", &ch);
    switch (ch) {
    case 1:
      printf("A:");
      scanf("%f", &a);
      printf("B:");
      scanf("%f", &b);
      c = a + b;
      printf("Addition is %f\n", c);
      break;
    case 2:
      printf("A:");
      scanf("%f", &a);
      printf("B:");
      scanf("%f", &b);
      c = a - b;
      printf("Subtraction is %f\n", c);
      break;
    case 3:
      printf("A:");
      scanf("%f", &a);
      printf("B:");
      scanf("%f", &b);
      c = a * b;
      printf("Multiplication is %f\n", c);
      break;
    case 4:
      printf("A:");
      scanf("%f", &a);
      printf("B:");
      scanf("%f", &b);
      if (b == 0) {
        printf("Division by zero not allowed\n");
      } else {
        c = a / b;
        printf("Division is %f\n", c);
      }
      break;
    case 5:
      exit(0);
      break;
    }
  } while (ch != 0);
  return 0;
}