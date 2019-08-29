/*
  Ivan Khaffaji
  CSC/ITC-251
  8/28/19
  Lab #2
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int userNum = 0;
	int arithNum  = 0;
	int guess = 0;
	int number = 10;

	printf("Enter a number between 1 and 10 inclusive.\n");
	scanf("%d",&userNum);

	arithNum = userNum + number;
	printf("%d + magic number = %d\n",userNum,arithNum);

	arithNum = userNum *number;
	printf("%d * magic number = %d\n",userNum,arithNum);

	arithNum = userNum -number;
	printf("%d - magic number = %d\n",userNum,arithNum);

	printf("What is your guess?\n");
	scanf("%d",&guess);

	if(guess == number)
	{
		printf("You are correct! You win!\n");
	}

	return EXIT_SUCCESS;
}
