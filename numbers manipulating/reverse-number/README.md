# Reverse User Entered Number
![Reverse User Entered Number](https://contentstatic.timesjobs.com/img/75734018/Master.jpg)

This program prompts the user to enter a number and then uses a while loop to reverse the order of its digits.

## Prerequisites
This program requires a C compiler to be installed on your system

## How to Run
- Open a command prompt or terminal window.
- Navigate to the directory where the program is saved.
- Compile the program using the following command:

  ```
  gcc -o reverse_number reverse_number.c
  ```
- Run the program using the following command:

  ```
  ./reverse_number
  ```
## Explanation

The program starts by declaring two integer variables, number and reverse. The printf statements prompt the user to enter a number. 
```
  printf("---------- Reverse Number --------\n");
  printf("Enter the Number: ");
  scanf("%d", &number);
```

Then it use while loop to continues until number becomes zero. Within the loop, the program uses the modulo operator (%) to get the remainder of number divided by 10. This gives us the rightmost digit of the number. The program then multiplies reverse by 10 and adds the remainder to the result.

```
  while (number != 0)
  {
    int reminder = number % 10;
    reverse = reverse * 10 + reminder;
    number /= 10;
  }

```

Then we can effectively reversing the order of the digits. Finally, the program divides number by 10, effectively removing the rightmost digit. Once the while loop is finished, the program prints the reversed number and returns 0 to indicate successful completion of the program.
