#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
	int n,lastDigit;
    //Last digit of -748255693 is -3 and is less than 6 and not 0
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    lastDigit = n % 10;
    if(lastDigit > 5){
       printf("Last digit of %d is %d and is greater than 5" ,n,lastDigit); 
    }
    else if(lastDigit == 0){
        printf("Last digit of %d is %d and is 0",n,lastDigit);
    }
      else{ 
          printf("Last digit of %d is %d and  is less than 6 and not 0 ",n,lastDigit);
      }
	return (0);
}
