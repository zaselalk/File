#include <stdio.h>

int main()
{
  char input;
  int uppercase, lowercase;
  printf("Enter a character: ");
  scanf("%c", &input);

  uppercase = (input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U');
  lowercase = (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u');

  if(uppercase || lowercase) {
    printf("%c is a vowel \n ",input);
  }else {
    printf("%c is not a vowel \n",input);
  }

  return 0;
}