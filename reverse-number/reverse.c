#include <stdio.h>

int main() {
  int number, reverse;
  int count = 1000;

  printf("---------- Reverse Number --------\n");
  printf("Enter the Number: ");
  scanf("%d", &number);

  while (number != 0) {
    int reminder = number % 10;
    reverse = reverse * 10 + reminder;
    number /= 10;
  }
  printf("%d\n", reverse);
  return 0;
}